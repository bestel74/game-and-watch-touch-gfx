#include <gui/screen_screen/screenView.hpp>
#include "stdlib.h"

extern int results[365];

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
	static Unicode::UnicodeChar buf1[16], buf2[16];


	int maxAt=0, max=0;
	this->dynamicGraph1.clear();

	for(int i=0 ; i < 100 ; i++)
	{
		int value = results[i];
		if(value > max)
		{
			maxAt = i+1;
			max = value;
		}

		this->dynamicGraph1.addDataPoint(value);
	}

	this->dynamicGraph1.setGraphRangeYAuto(1,  0);

	Unicode::snprintf(buf1, 16, "%d", max);
	Unicode::snprintf(buf2, 16, "%d", maxAt);

	this->stat_1.setWildcard1(buf1);
	this->stat_1.setWildcard2(buf2);
}
