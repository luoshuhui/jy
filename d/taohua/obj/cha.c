inherit ITEM;
inherit F_LIQUID;

void create()
{
        set_name("���ɲ�", ({ "zuixian cha","cha" }));
        set_weight(1000);
        if( clonep() )
            set_default_object(__FILE__);
        else {
        set("long",
"����һ����ɫ���̡���ζŨ���ϵȺò衣���д����õĹ�͵ġ�!\n");
                set("unit", "��");
                set("value", 20);
                set("max_liquid", 10);
        }
        set("liquid", ([
            "name" : "���ɲ�",
            "remaining" : 8,
        	"type" : "water"
        ]) );
        set("liquid_type", "water");
        setup();
}
