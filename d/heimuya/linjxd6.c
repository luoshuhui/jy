// ROOM : linjxd6.c
inherit ROOM;
void create()
{
  set("short","林间小道");
  set("long",
      "你走在一条阴暗的林间小道上，两旁是阴森森的树林。一阵阵风吹过\n"
      "树梢, 发出沙沙的响声, 令你不寒而栗. \n"
     );
  set("exits",([
      "south" : __DIR__"linjxd1",
      "north" : __DIR__"linjxd4",     
      "east"  : __DIR__"up1",
      "west"  : __DIR__"dating2",
     ]));
 setup();
 replace_program(ROOM);
}
