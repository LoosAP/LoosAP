#include "./GUI/Simple_window.h"
#include "./GUI/Graph.h"

#include <string>
#include <iostream>

using namespace Graph_lib

int main ()
{

    try{
        Point t1{300, 50};
        Simple_window win (t1, 1000, 800, "my window");
        win.wait_for_button();

        Lines grid:
        int x_size = 800;
        int y_side = 800;
        for (int i =100; int<=x_size; i+=100){
            grid.add(Point(i, 0), Point(i, y_size), )
        }
        win.attach(grid);
        win.wait_for_button();

        Rectangle a1 {Point{0,0}, 100, 100};
        win.attach(a1);

        poly_rect.add(Point{0,0});
        poly_rect.add(Point{0,100});
        poly_rect.add(Point{100,100});
        poly_rect.add(Point{100,0});
        poly_rect.set_color(Color::red);

        win.attach(poly_rect);

        Rectangle a2 {Point{100,100}, 100, 100};
        win.attach(a2);

        poly_rect.add(Point{100,100});
        poly_rect.add(Point{100,200});
        poly_rect.add(Point{200,200});
        poly_rect.add(Point{200,100});
        poly_rect.set_color(Color::red);

        Rectangle a3 {Point{200,200}, 100, 100};
        win.attach(a3);

        poly_rect.add(Point{200,200});
        poly_rect.add(Point{200,300});
        poly_rect.add(Point{300,300});
        poly_rect.add(Point{300,200});
        poly_rect.set_color(Color::red);

        win.attach(poly_rect);

        Rectangle a4 {Point{300,300}, 100, 100};
        win.attach(a4);

        poly_rect.add(Point{300,300});
        poly_rect.add(Point{300,400});
        poly_rect.add(Point{400,400});
        poly_rect.add(Point{400,300});
        poly_rect.set_color(Color::red);

        win.attach(poly_rect);

        Rectangle a5 {Point{400,400}, 100, 100};
        win.attach(a5);

        poly_rect.add(Point{400,400});
        poly_rect.add(Point{400,500});
        poly_rect.add(Point{500,500});
        poly_rect.add(Point{500,400});
        poly_rect.set_color(Color::red);

        win.attach(poly_rect);

        Rectangle a6 {Point{500,500}, 100, 100};
        win.attach(a6);

        poly_rect.add(Point{500,500});
        poly_rect.add(Point{500,600});
        poly_rect.add(Point{600,600});
        poly_rect.add(Point{600,500});
        poly_rect.set_color(Color::red);

        win.attach(poly_rect);

        Rectangle a7 {Point{600,600}, 100, 100};
        win.attach(a7);

        poly_rect.add(Point{600,600});
        poly_rect.add(Point{600,700});
        poly_rect.add(Point{700,700});
        poly_rect.add(Point{700,600});
        poly_rect.set_color(Color::red);

        win.attach(poly_rect);

        Rectangle a8 {Point{700,700}, 100, 100};
        win.attach(a8);

        poly_rect.add(Point{700,700});
        poly_rect.add(Point{700,800});
        poly_rect.add(Point{800,800});
        poly_rect.add(Point{800,700});
        poly_rect.set_color(Color::red);

        win.attach(poly_rect);

        win.wait_for_button();
    } catch (exception& e){
        cerr << "exception: " e.what() << endl;
        return 1;

    } catch (...) {
        cerr << "exception\n"
        return 2;
    }
}
