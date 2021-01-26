/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/Color.hpp>

screenViewBase::screenViewBase()
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    boxWithBorder1.setPosition(0, 0, 320, 240);
    boxWithBorder1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 255));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
    boxWithBorder1.setBorderSize(5);

    shape1.setPosition(-106, 65, 80, 80);
    shape1.setOrigin(0.000f, 0.000f);
    shape1.setScale(1.000f, 1.000f);
    shape1.setAngle(0.000f);
    shape1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    shape1.setPainter(shape1Painter);
    const touchgfx::AbstractShape::ShapePoint<float> shape1Points[4] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f }, { 0.000f, 40.000f } };
    shape1.setShape(shape1Points);

    shape2.setPosition(121, 80, 79, 81);
    shape2.setOrigin(0.000f, 0.000f);
    shape2.setScale(1.000f, 1.000f);
    shape2.setAngle(0.000f);
    shape2Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
    shape2.setPainter(shape2Painter);
    const touchgfx::AbstractShape::ShapePoint<float> shape2Points[4] = { { 40.000f, 0.000f }, { 80.000f, 40.000f }, { 40.000f, 80.000f }, { 0.000f, 40.000f } };
    shape2.setShape(shape2Points);

    add(__background);
    add(boxWithBorder1);
    add(shape1);
    add(shape2);
}

void screenViewBase::setupScreen()
{

}
