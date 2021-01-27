#include <gui/screen_screen/screenView.hpp>
#include "stdlib.h"

screenView::screenView()
{

}

void screenView::setupScreen()
{
    screenViewBase::setupScreen();
}

void screenView::tearDownScreen()
{
    screenViewBase::tearDownScreen();
}


void screenView::add_new_data()
{
	this->dynamicGraph1.addDataPoint(rand()%100);
}
