#ifndef TMCONN_H
#define TMCONN_H

#include <gtkmm/window.h>
#include <gtkmm/application.h>
#include <gtkmm/fixed.h>
#include <gtkmm/box.h>
#include <gtkmm/alignment.h>
#include <gtkmm/entry.h>
#include <gtkmm/label.h>
#include <gtkmm/button.h>
#include <gtkmm/frame.h>
#include <gtkmm/messagedialog.h>
#include <iostream>

class TMConn : public Gtk::Window {
    Gtk::Fixed m_fixed;
    Gtk::Box m_box1;
    Gtk::Alignment m_alignment1;
    Gtk::Entry m_entry;
    Gtk::Label m_label;
    Gtk::Button m_button;
    Gtk::Frame m_frame;

    public:
        TMConn();
       // ~TMConn() override;
        void set_hierarchy();
        void draw_widgets();

    protected:
        void on_button_click();
        
};

#endif /* ifndef TMCONN_H */
