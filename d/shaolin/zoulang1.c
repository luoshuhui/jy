// Room: /d/shaolin/zoulang1.c
// Date: YZC 96/01/19

inherit ROOM;


string look_writing();


void create()
{
	set("short", "����");
	set("long", @LONG
�������������ȡ�����һ��֧������ĸ�ǽ�ϣ���һ������
���߰����õ��ݶ�����������������������Ҳ�ò�������˸���
�����ͼ�Σ�ÿ�����ƺ�������˵һ���渶��˵ķ𾭹��¡���
��ǽ������һ����(writing)������ͨ�������á�
LONG
	);

	set("exits", ([
		"east" : __DIR__"zoulang2",
		"north" : __DIR__"banruo1",
	]));

	set("item_desc",([
		"writing"		:	(: look_writing :),
	]));
	setup();
}


string look_writing()
{
	return
	"\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n"
	"    ����������������������������������������������������\n";
}

