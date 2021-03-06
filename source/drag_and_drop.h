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

#ifndef __drag_and_drop_h
#define __drag_and_drop_h

#define free_and_reassign(string, new_value) { g_free (string); string = new_value; }
#define streq(string1, string2) (g_strcmp0 ((string1), (string2)) == 0)

extern GtkTreeStore *treestore;
extern GtkTreeModel *model;
extern GtkWidget *treeview;
extern GtkTreeIter iter;

extern GSList *source_paths;

extern gboolean autosort_options;

extern gint handler_id_row_selected;

extern void activate_change_done (void);
extern gchar *check_if_invisible_ancestor_exists (GtkTreeModel *local_model, GtkTreePath *path);
extern void remove_rows (gchar *origin);
extern void row_selected (void);
extern void show_msg_in_statusbar (gchar *message);
extern void sort_execute_or_startupnotify_options_after_insertion (gchar *execute_or_startupnotify,
								   GtkTreeSelection *selection,
								   GtkTreeIter *parent, gchar *option);
G_GNUC_NULL_TERMINATED extern gboolean streq_any (const gchar *string, ...);
extern void unref_icon (GdkPixbuf **icon, gboolean set_to_NULL);

#endif
