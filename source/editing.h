/*
   Kickshaw - A Menu Editor for Openbox

   Copyright (c) 2010-2013        Marcus Schaetzle

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along 
   with Kickshaw. If not, see http://www.gnu.org/licenses/.
*/

#ifndef __editing_h
#define __editing_h

#define streq(string1, string2) (g_strcmp0 ((string1), (string2)) == 0)

extern GtkWidget *window;
extern GtkTreeStore *treestore;
extern GtkTreeModel *model;
extern GtkWidget *treeview;
extern GtkTreeIter iter;

extern GtkWidget *entry_fields[];
extern GtkWidget *remove_icon;

extern gchar *txt_fields[];
extern GSList *menu_ids;

extern const gint NUMBER_OF_EXECUTE_OPTS;
extern gchar *execute_options[];

extern const gint NUMBER_OF_STARTUPNOTIFY_OPTS;
extern gchar *startupnotify_options[];

extern gint font_size;

extern void activate_change_done (void);
extern gchar *check_if_invisible_ancestor_exists (GtkTreeModel *local_model, GtkTreePath *path);
extern GtkWidget *create_dialog (GtkWidget **dialog, gchar *dialog_title, gchar *stock_id, gchar *button_txt_1, 
				 gchar *button_txt_2, gchar *button_txt_3, gchar *label_txt, gboolean show_immediately);
extern gchar *get_modified_date_for_icon (gchar *icon_path);
extern void get_toplevel_iter_from_path (GtkTreeIter *local_iter, GtkTreePath *local_path);
extern void remove_menu_id (gchar *menu_id);
extern void remove_rows (gchar *origin);
extern void repopulate_txt_fields_array (void);
extern void row_selected (void);
extern void set_entry_fields (void);
extern void show_errmsg (gchar *errmsg_raw_txt);
G_GNUC_NULL_TERMINATED gboolean streq_any (const gchar *string, ...);

#endif
