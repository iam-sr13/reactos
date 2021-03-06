#define __ROS_LONG64__

#define STANDALONE
#include <apitest.h>

extern void func_CloseThemeData(void);
extern void func_DrawThemeParentBackground(void);
extern void func_SetWindowTheme(void);

const struct test winetest_testlist[] =
{
    { "CloseThemeData", func_CloseThemeData },
    { "DrawThemeParentBackground", func_DrawThemeParentBackground },
    { "SetWindowTheme", func_SetWindowTheme },
    { 0, 0 }
};
