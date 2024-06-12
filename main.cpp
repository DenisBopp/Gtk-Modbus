#include "TMConn.hpp"

int main(int argc, char** argv){
    auto app = Gtk::Application::create(argc, argv , "org.tmconn.gtkmm");
    TMConn tmconn;
    return app->run(tmconn);
}
