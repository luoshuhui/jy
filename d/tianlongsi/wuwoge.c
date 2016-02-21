inherit ROOM;

void create()
{
        set("short", "无我阁");
        set("long",@LONG
这是历代大理王侯前来进香还愿时休息的地方。阁内檀象宝炉，软榻
矮几，一应俱全，清静之中隐然透出一丝富贵之象。
LONG
        );
        set("exits", ([
		"south": __DIR__"ruihemen",
                "west" : __DIR__"ta1",
	]));
	set("objects",([
                __DIR__"npc/xiaoshami" : 2,
        ]));
        setup();
        replace_program(ROOM);
}
