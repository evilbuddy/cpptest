#include <gtk/gtk.h>

int clicks = 0;

static void button_clicked(GtkButton* button, gpointer user_data) {
	GtkLabel* label = GTK_LABEL(user_data);
	clicks += 1;

	char* text = g_strdup_printf("%d clicks", clicks);
	gtk_label_set_text(label, text);

	g_free(text);

}

static void app_activate(GtkApplication* app, gpointer user_data) {
	GtkWidget* window = gtk_application_window_new(app);
	gtk_window_set_title(GTK_WINDOW(window), "GTK4 Test App");
	gtk_window_set_default_size(GTK_WINDOW(window), 400, 600);

	GtkWidget* vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);

	GtkWidget* label = gtk_label_new("0 clicks");
	gtk_box_append(GTK_BOX(vbox), label);

	GtkWidget* button = gtk_button_new_with_label("Click!");
	g_signal_connect(button, "clicked", G_CALLBACK(button_clicked), label);
	gtk_box_append(GTK_BOX(vbox), button);

	gtk_window_set_child(GTK_WINDOW(window), vbox);

	gtk_widget_show(window);
}


int main(int argc, char* argv[]) {
	GtkApplication* app = gtk_application_new("org.example.GtkTest", G_APPLICATION_FLAGS_NONE);
	g_signal_connect(app, "activate", G_CALLBACK(app_activate), NULL);
	int status = g_application_run(G_APPLICATION(app), argc, argv);
	g_print("Congratulations ! You clicked %i times.", clicks);
	g_object_unref(app);
	return status;
}
