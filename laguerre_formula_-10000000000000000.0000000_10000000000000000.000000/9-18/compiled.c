#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "18";

double f_if(float x) {
        float r10002896 = 1.0;
        float r10002897 = -18.0;
        float r10002898 = x;
        float r10002899 = r10002897 * r10002898;
        float r10002900 = r10002896 + r10002899;
        float r10002901 = 76.5;
        float r10002902 = r10002898 * r10002898;
        float r10002903 = r10002901 * r10002902;
        float r10002904 = r10002900 + r10002903;
        float r10002905 = -136.0;
        float r10002906 = r10002902 * r10002898;
        float r10002907 = r10002905 * r10002906;
        float r10002908 = r10002904 + r10002907;
        float r10002909 = 127.5;
        float r10002910 = r10002906 * r10002898;
        float r10002911 = r10002909 * r10002910;
        float r10002912 = r10002908 + r10002911;
        float r10002913 = -71.4;
        float r10002914 = r10002910 * r10002898;
        float r10002915 = r10002913 * r10002914;
        float r10002916 = r10002912 + r10002915;
        float r10002917 = 25.783333;
        float r10002918 = r10002914 * r10002898;
        float r10002919 = r10002917 * r10002918;
        float r10002920 = r10002916 + r10002919;
        float r10002921 = -6.314286;
        float r10002922 = r10002918 * r10002898;
        float r10002923 = r10002921 * r10002922;
        float r10002924 = r10002920 + r10002923;
        float r10002925 = 1.085268;
        float r10002926 = r10002922 * r10002898;
        float r10002927 = r10002925 * r10002926;
        float r10002928 = r10002924 + r10002927;
        float r10002929 = -0.133984;
        float r10002930 = r10002926 * r10002898;
        float r10002931 = r10002929 * r10002930;
        float r10002932 = r10002928 + r10002931;
        float r10002933 = 0.012059;
        float r10002934 = r10002930 * r10002898;
        float r10002935 = r10002933 * r10002934;
        float r10002936 = r10002932 + r10002935;
        float r10002937 = -0.000797;
        float r10002938 = r10002934 * r10002898;
        float r10002939 = r10002937 * r10002938;
        float r10002940 = r10002936 + r10002939;
        float r10002941 = 3.9e-05;
        float r10002942 = r10002938 * r10002898;
        float r10002943 = r10002941 * r10002942;
        float r10002944 = r10002940 + r10002943;
        float r10002945 = -1e-06;
        float r10002946 = r10002942 * r10002898;
        float r10002947 = r10002945 * r10002946;
        float r10002948 = r10002944 + r10002947;
        return r10002948;
}

double f_id(double x) {
        double r10002949 = 1.0;
        double r10002950 = -18.0;
        double r10002951 = x;
        double r10002952 = r10002950 * r10002951;
        double r10002953 = r10002949 + r10002952;
        double r10002954 = 76.5;
        double r10002955 = r10002951 * r10002951;
        double r10002956 = r10002954 * r10002955;
        double r10002957 = r10002953 + r10002956;
        double r10002958 = -136.0;
        double r10002959 = r10002955 * r10002951;
        double r10002960 = r10002958 * r10002959;
        double r10002961 = r10002957 + r10002960;
        double r10002962 = 127.5;
        double r10002963 = r10002959 * r10002951;
        double r10002964 = r10002962 * r10002963;
        double r10002965 = r10002961 + r10002964;
        double r10002966 = -71.4;
        double r10002967 = r10002963 * r10002951;
        double r10002968 = r10002966 * r10002967;
        double r10002969 = r10002965 + r10002968;
        double r10002970 = 25.783333;
        double r10002971 = r10002967 * r10002951;
        double r10002972 = r10002970 * r10002971;
        double r10002973 = r10002969 + r10002972;
        double r10002974 = -6.314286;
        double r10002975 = r10002971 * r10002951;
        double r10002976 = r10002974 * r10002975;
        double r10002977 = r10002973 + r10002976;
        double r10002978 = 1.085268;
        double r10002979 = r10002975 * r10002951;
        double r10002980 = r10002978 * r10002979;
        double r10002981 = r10002977 + r10002980;
        double r10002982 = -0.133984;
        double r10002983 = r10002979 * r10002951;
        double r10002984 = r10002982 * r10002983;
        double r10002985 = r10002981 + r10002984;
        double r10002986 = 0.012059;
        double r10002987 = r10002983 * r10002951;
        double r10002988 = r10002986 * r10002987;
        double r10002989 = r10002985 + r10002988;
        double r10002990 = -0.000797;
        double r10002991 = r10002987 * r10002951;
        double r10002992 = r10002990 * r10002991;
        double r10002993 = r10002989 + r10002992;
        double r10002994 = 3.9e-05;
        double r10002995 = r10002991 * r10002951;
        double r10002996 = r10002994 * r10002995;
        double r10002997 = r10002993 + r10002996;
        double r10002998 = -1e-06;
        double r10002999 = r10002995 * r10002951;
        double r10003000 = r10002998 * r10002999;
        double r10003001 = r10002997 + r10003000;
        return r10003001;
}


double f_of(float x) {
        float r10003002 = -18.0;
        float r10003003 = 76.5;
        float r10003004 = x;
        float r10003005 = r10003003 * r10003004;
        float r10003006 = r10003002 + r10003005;
        float r10003007 = r10003006 * r10003004;
        float r10003008 = 1.0;
        float r10003009 = -136.0;
        float r10003010 = r10003004 * r10003009;
        float r10003011 = r10003004 * r10003004;
        float r10003012 = r10003010 * r10003011;
        float r10003013 = r10003008 + r10003012;
        float r10003014 = r10003007 + r10003013;
        float r10003015 = -71.4;
        float r10003016 = r10003004 * r10003015;
        float r10003017 = r10003016 * r10003011;
        float r10003018 = r10003011 * r10003017;
        float r10003019 = 127.5;
        float r10003020 = 4;
        float r10003021 = pow(r10003004, r10003020);
        float r10003022 = r10003019 * r10003021;
        float r10003023 = r10003018 + r10003022;
        float r10003024 = 25.783333;
        float r10003025 = r10003004 * r10003024;
        float r10003026 = r10003004 * r10003025;
        float r10003027 = r10003011 * r10003011;
        float r10003028 = r10003026 * r10003027;
        float r10003029 = r10003023 + r10003028;
        float r10003030 = r10003014 + r10003029;
        float r10003031 = 3;
        float r10003032 = pow(r10003004, r10003031);
        float r10003033 = r10003032 * r10003032;
        float r10003034 = -6.314286;
        float r10003035 = 1.085268;
        float r10003036 = r10003035 * r10003004;
        float r10003037 = r10003034 + r10003036;
        float r10003038 = r10003004 * r10003037;
        float r10003039 = r10003033 * r10003038;
        float r10003040 = r10003027 * r10003027;
        float r10003041 = 0.012059;
        float r10003042 = r10003011 * r10003041;
        float r10003043 = -0.133984;
        float r10003044 = r10003043 * r10003004;
        float r10003045 = r10003042 + r10003044;
        float r10003046 = r10003040 * r10003045;
        float r10003047 = r10003039 + r10003046;
        float r10003048 = r10003030 + r10003047;
        float r10003049 = -0.000797;
        float r10003050 = r10003049 * r10003004;
        float r10003051 = r10003027 * r10003050;
        float r10003052 = 3.9e-05;
        float r10003053 = r10003052 * r10003011;
        float r10003054 = r10003027 * r10003053;
        float r10003055 = r10003051 + r10003054;
        float r10003056 = r10003033 * r10003055;
        float r10003057 = -1e-06;
        float r10003058 = r10003057 * r10003004;
        float r10003059 = r10003027 * r10003058;
        float r10003060 = r10003040 * r10003059;
        float r10003061 = r10003056 + r10003060;
        float r10003062 = r10003048 + r10003061;
        return r10003062;
}

double f_od(double x) {
        double r10003063 = -18.0;
        double r10003064 = 76.5;
        double r10003065 = x;
        double r10003066 = r10003064 * r10003065;
        double r10003067 = r10003063 + r10003066;
        double r10003068 = r10003067 * r10003065;
        double r10003069 = 1.0;
        double r10003070 = -136.0;
        double r10003071 = r10003065 * r10003070;
        double r10003072 = r10003065 * r10003065;
        double r10003073 = r10003071 * r10003072;
        double r10003074 = r10003069 + r10003073;
        double r10003075 = r10003068 + r10003074;
        double r10003076 = -71.4;
        double r10003077 = r10003065 * r10003076;
        double r10003078 = r10003077 * r10003072;
        double r10003079 = r10003072 * r10003078;
        double r10003080 = 127.5;
        double r10003081 = 4;
        double r10003082 = pow(r10003065, r10003081);
        double r10003083 = r10003080 * r10003082;
        double r10003084 = r10003079 + r10003083;
        double r10003085 = 25.783333;
        double r10003086 = r10003065 * r10003085;
        double r10003087 = r10003065 * r10003086;
        double r10003088 = r10003072 * r10003072;
        double r10003089 = r10003087 * r10003088;
        double r10003090 = r10003084 + r10003089;
        double r10003091 = r10003075 + r10003090;
        double r10003092 = 3;
        double r10003093 = pow(r10003065, r10003092);
        double r10003094 = r10003093 * r10003093;
        double r10003095 = -6.314286;
        double r10003096 = 1.085268;
        double r10003097 = r10003096 * r10003065;
        double r10003098 = r10003095 + r10003097;
        double r10003099 = r10003065 * r10003098;
        double r10003100 = r10003094 * r10003099;
        double r10003101 = r10003088 * r10003088;
        double r10003102 = 0.012059;
        double r10003103 = r10003072 * r10003102;
        double r10003104 = -0.133984;
        double r10003105 = r10003104 * r10003065;
        double r10003106 = r10003103 + r10003105;
        double r10003107 = r10003101 * r10003106;
        double r10003108 = r10003100 + r10003107;
        double r10003109 = r10003091 + r10003108;
        double r10003110 = -0.000797;
        double r10003111 = r10003110 * r10003065;
        double r10003112 = r10003088 * r10003111;
        double r10003113 = 3.9e-05;
        double r10003114 = r10003113 * r10003072;
        double r10003115 = r10003088 * r10003114;
        double r10003116 = r10003112 + r10003115;
        double r10003117 = r10003094 * r10003116;
        double r10003118 = -1e-06;
        double r10003119 = r10003118 * r10003065;
        double r10003120 = r10003088 * r10003119;
        double r10003121 = r10003101 * r10003120;
        double r10003122 = r10003117 + r10003121;
        double r10003123 = r10003109 + r10003122;
        return r10003123;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10003124, r10003125, r10003126, r10003127, r10003128, r10003129, r10003130, r10003131, r10003132, r10003133, r10003134, r10003135, r10003136, r10003137, r10003138, r10003139, r10003140, r10003141, r10003142, r10003143, r10003144, r10003145, r10003146, r10003147, r10003148, r10003149, r10003150, r10003151, r10003152, r10003153, r10003154, r10003155, r10003156, r10003157, r10003158, r10003159, r10003160, r10003161, r10003162, r10003163, r10003164, r10003165, r10003166, r10003167, r10003168, r10003169, r10003170, r10003171, r10003172, r10003173, r10003174, r10003175, r10003176;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10003124, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10003125, "-18.0", 10, MPFR_RNDN);
        mpfr_init(r10003126);
        mpfr_init(r10003127);
        mpfr_init(r10003128);
        mpfr_init_set_str(r10003129, "76.5", 10, MPFR_RNDN);
        mpfr_init(r10003130);
        mpfr_init(r10003131);
        mpfr_init(r10003132);
        mpfr_init_set_str(r10003133, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r10003134);
        mpfr_init(r10003135);
        mpfr_init(r10003136);
        mpfr_init_set_str(r10003137, "127.5", 10, MPFR_RNDN);
        mpfr_init(r10003138);
        mpfr_init(r10003139);
        mpfr_init(r10003140);
        mpfr_init_set_str(r10003141, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r10003142);
        mpfr_init(r10003143);
        mpfr_init(r10003144);
        mpfr_init_set_str(r10003145, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r10003146);
        mpfr_init(r10003147);
        mpfr_init(r10003148);
        mpfr_init_set_str(r10003149, "-6.314286", 10, MPFR_RNDN);
        mpfr_init(r10003150);
        mpfr_init(r10003151);
        mpfr_init(r10003152);
        mpfr_init_set_str(r10003153, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r10003154);
        mpfr_init(r10003155);
        mpfr_init(r10003156);
        mpfr_init_set_str(r10003157, "-0.133984", 10, MPFR_RNDN);
        mpfr_init(r10003158);
        mpfr_init(r10003159);
        mpfr_init(r10003160);
        mpfr_init_set_str(r10003161, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r10003162);
        mpfr_init(r10003163);
        mpfr_init(r10003164);
        mpfr_init_set_str(r10003165, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r10003166);
        mpfr_init(r10003167);
        mpfr_init(r10003168);
        mpfr_init_set_str(r10003169, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r10003170);
        mpfr_init(r10003171);
        mpfr_init(r10003172);
        mpfr_init_set_str(r10003173, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r10003174);
        mpfr_init(r10003175);
        mpfr_init(r10003176);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10003126, x, MPFR_RNDN);
        mpfr_mul(r10003127, r10003125, r10003126, MPFR_RNDN);
        mpfr_add(r10003128, r10003124, r10003127, MPFR_RNDN);
        ;
        mpfr_mul(r10003130, r10003126, r10003126, MPFR_RNDN);
        mpfr_mul(r10003131, r10003129, r10003130, MPFR_RNDN);
        mpfr_add(r10003132, r10003128, r10003131, MPFR_RNDN);
        ;
        mpfr_mul(r10003134, r10003130, r10003126, MPFR_RNDN);
        mpfr_mul(r10003135, r10003133, r10003134, MPFR_RNDN);
        mpfr_add(r10003136, r10003132, r10003135, MPFR_RNDN);
        ;
        mpfr_mul(r10003138, r10003134, r10003126, MPFR_RNDN);
        mpfr_mul(r10003139, r10003137, r10003138, MPFR_RNDN);
        mpfr_add(r10003140, r10003136, r10003139, MPFR_RNDN);
        ;
        mpfr_mul(r10003142, r10003138, r10003126, MPFR_RNDN);
        mpfr_mul(r10003143, r10003141, r10003142, MPFR_RNDN);
        mpfr_add(r10003144, r10003140, r10003143, MPFR_RNDN);
        ;
        mpfr_mul(r10003146, r10003142, r10003126, MPFR_RNDN);
        mpfr_mul(r10003147, r10003145, r10003146, MPFR_RNDN);
        mpfr_add(r10003148, r10003144, r10003147, MPFR_RNDN);
        ;
        mpfr_mul(r10003150, r10003146, r10003126, MPFR_RNDN);
        mpfr_mul(r10003151, r10003149, r10003150, MPFR_RNDN);
        mpfr_add(r10003152, r10003148, r10003151, MPFR_RNDN);
        ;
        mpfr_mul(r10003154, r10003150, r10003126, MPFR_RNDN);
        mpfr_mul(r10003155, r10003153, r10003154, MPFR_RNDN);
        mpfr_add(r10003156, r10003152, r10003155, MPFR_RNDN);
        ;
        mpfr_mul(r10003158, r10003154, r10003126, MPFR_RNDN);
        mpfr_mul(r10003159, r10003157, r10003158, MPFR_RNDN);
        mpfr_add(r10003160, r10003156, r10003159, MPFR_RNDN);
        ;
        mpfr_mul(r10003162, r10003158, r10003126, MPFR_RNDN);
        mpfr_mul(r10003163, r10003161, r10003162, MPFR_RNDN);
        mpfr_add(r10003164, r10003160, r10003163, MPFR_RNDN);
        ;
        mpfr_mul(r10003166, r10003162, r10003126, MPFR_RNDN);
        mpfr_mul(r10003167, r10003165, r10003166, MPFR_RNDN);
        mpfr_add(r10003168, r10003164, r10003167, MPFR_RNDN);
        ;
        mpfr_mul(r10003170, r10003166, r10003126, MPFR_RNDN);
        mpfr_mul(r10003171, r10003169, r10003170, MPFR_RNDN);
        mpfr_add(r10003172, r10003168, r10003171, MPFR_RNDN);
        ;
        mpfr_mul(r10003174, r10003170, r10003126, MPFR_RNDN);
        mpfr_mul(r10003175, r10003173, r10003174, MPFR_RNDN);
        mpfr_add(r10003176, r10003172, r10003175, MPFR_RNDN);
        return mpfr_get_d(r10003176, MPFR_RNDN);
}

static mpfr_t r10003177, r10003178, r10003179, r10003180, r10003181, r10003182, r10003183, r10003184, r10003185, r10003186, r10003187, r10003188, r10003189, r10003190, r10003191, r10003192, r10003193, r10003194, r10003195, r10003196, r10003197, r10003198, r10003199, r10003200, r10003201, r10003202, r10003203, r10003204, r10003205, r10003206, r10003207, r10003208, r10003209, r10003210, r10003211, r10003212, r10003213, r10003214, r10003215, r10003216, r10003217, r10003218, r10003219, r10003220, r10003221, r10003222, r10003223, r10003224, r10003225, r10003226, r10003227, r10003228, r10003229, r10003230, r10003231, r10003232, r10003233, r10003234, r10003235, r10003236, r10003237;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10003177, "-18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10003178, "76.5", 10, MPFR_RNDN);
        mpfr_init(r10003179);
        mpfr_init(r10003180);
        mpfr_init(r10003181);
        mpfr_init(r10003182);
        mpfr_init_set_str(r10003183, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10003184, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r10003185);
        mpfr_init(r10003186);
        mpfr_init(r10003187);
        mpfr_init(r10003188);
        mpfr_init(r10003189);
        mpfr_init_set_str(r10003190, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r10003191);
        mpfr_init(r10003192);
        mpfr_init(r10003193);
        mpfr_init_set_str(r10003194, "127.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10003195, "4", 10, MPFR_RNDN);
        mpfr_init(r10003196);
        mpfr_init(r10003197);
        mpfr_init(r10003198);
        mpfr_init_set_str(r10003199, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r10003200);
        mpfr_init(r10003201);
        mpfr_init(r10003202);
        mpfr_init(r10003203);
        mpfr_init(r10003204);
        mpfr_init(r10003205);
        mpfr_init_set_str(r10003206, "3", 10, MPFR_RNDN);
        mpfr_init(r10003207);
        mpfr_init(r10003208);
        mpfr_init_set_str(r10003209, "-6.314286", 10, MPFR_RNDN);
        mpfr_init_set_str(r10003210, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r10003211);
        mpfr_init(r10003212);
        mpfr_init(r10003213);
        mpfr_init(r10003214);
        mpfr_init(r10003215);
        mpfr_init_set_str(r10003216, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r10003217);
        mpfr_init_set_str(r10003218, "-0.133984", 10, MPFR_RNDN);
        mpfr_init(r10003219);
        mpfr_init(r10003220);
        mpfr_init(r10003221);
        mpfr_init(r10003222);
        mpfr_init(r10003223);
        mpfr_init_set_str(r10003224, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r10003225);
        mpfr_init(r10003226);
        mpfr_init_set_str(r10003227, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r10003228);
        mpfr_init(r10003229);
        mpfr_init(r10003230);
        mpfr_init(r10003231);
        mpfr_init_set_str(r10003232, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r10003233);
        mpfr_init(r10003234);
        mpfr_init(r10003235);
        mpfr_init(r10003236);
        mpfr_init(r10003237);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10003179, x, MPFR_RNDN);
        mpfr_mul(r10003180, r10003178, r10003179, MPFR_RNDN);
        mpfr_add(r10003181, r10003177, r10003180, MPFR_RNDN);
        mpfr_mul(r10003182, r10003181, r10003179, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10003185, r10003179, r10003184, MPFR_RNDN);
        mpfr_mul(r10003186, r10003179, r10003179, MPFR_RNDN);
        mpfr_mul(r10003187, r10003185, r10003186, MPFR_RNDN);
        mpfr_add(r10003188, r10003183, r10003187, MPFR_RNDN);
        mpfr_add(r10003189, r10003182, r10003188, MPFR_RNDN);
        ;
        mpfr_mul(r10003191, r10003179, r10003190, MPFR_RNDN);
        mpfr_mul(r10003192, r10003191, r10003186, MPFR_RNDN);
        mpfr_mul(r10003193, r10003186, r10003192, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r10003196, r10003179, r10003195, MPFR_RNDN);
        mpfr_mul(r10003197, r10003194, r10003196, MPFR_RNDN);
        mpfr_add(r10003198, r10003193, r10003197, MPFR_RNDN);
        ;
        mpfr_mul(r10003200, r10003179, r10003199, MPFR_RNDN);
        mpfr_mul(r10003201, r10003179, r10003200, MPFR_RNDN);
        mpfr_mul(r10003202, r10003186, r10003186, MPFR_RNDN);
        mpfr_mul(r10003203, r10003201, r10003202, MPFR_RNDN);
        mpfr_add(r10003204, r10003198, r10003203, MPFR_RNDN);
        mpfr_add(r10003205, r10003189, r10003204, MPFR_RNDN);
        ;
        mpfr_pow(r10003207, r10003179, r10003206, MPFR_RNDN);
        mpfr_mul(r10003208, r10003207, r10003207, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10003211, r10003210, r10003179, MPFR_RNDN);
        mpfr_add(r10003212, r10003209, r10003211, MPFR_RNDN);
        mpfr_mul(r10003213, r10003179, r10003212, MPFR_RNDN);
        mpfr_mul(r10003214, r10003208, r10003213, MPFR_RNDN);
        mpfr_mul(r10003215, r10003202, r10003202, MPFR_RNDN);
        ;
        mpfr_mul(r10003217, r10003186, r10003216, MPFR_RNDN);
        ;
        mpfr_mul(r10003219, r10003218, r10003179, MPFR_RNDN);
        mpfr_add(r10003220, r10003217, r10003219, MPFR_RNDN);
        mpfr_mul(r10003221, r10003215, r10003220, MPFR_RNDN);
        mpfr_add(r10003222, r10003214, r10003221, MPFR_RNDN);
        mpfr_add(r10003223, r10003205, r10003222, MPFR_RNDN);
        ;
        mpfr_mul(r10003225, r10003224, r10003179, MPFR_RNDN);
        mpfr_mul(r10003226, r10003202, r10003225, MPFR_RNDN);
        ;
        mpfr_mul(r10003228, r10003227, r10003186, MPFR_RNDN);
        mpfr_mul(r10003229, r10003202, r10003228, MPFR_RNDN);
        mpfr_add(r10003230, r10003226, r10003229, MPFR_RNDN);
        mpfr_mul(r10003231, r10003208, r10003230, MPFR_RNDN);
        ;
        mpfr_mul(r10003233, r10003232, r10003179, MPFR_RNDN);
        mpfr_mul(r10003234, r10003202, r10003233, MPFR_RNDN);
        mpfr_mul(r10003235, r10003215, r10003234, MPFR_RNDN);
        mpfr_add(r10003236, r10003231, r10003235, MPFR_RNDN);
        mpfr_add(r10003237, r10003223, r10003236, MPFR_RNDN);
        return mpfr_get_d(r10003237, MPFR_RNDN);
}

static mpfr_t r10003238, r10003239, r10003240, r10003241, r10003242, r10003243, r10003244, r10003245, r10003246, r10003247, r10003248, r10003249, r10003250, r10003251, r10003252, r10003253, r10003254, r10003255, r10003256, r10003257, r10003258, r10003259, r10003260, r10003261, r10003262, r10003263, r10003264, r10003265, r10003266, r10003267, r10003268, r10003269, r10003270, r10003271, r10003272, r10003273, r10003274, r10003275, r10003276, r10003277, r10003278, r10003279, r10003280, r10003281, r10003282, r10003283, r10003284, r10003285, r10003286, r10003287, r10003288, r10003289, r10003290, r10003291, r10003292, r10003293, r10003294, r10003295, r10003296, r10003297, r10003298;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10003238, "-18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10003239, "76.5", 10, MPFR_RNDN);
        mpfr_init(r10003240);
        mpfr_init(r10003241);
        mpfr_init(r10003242);
        mpfr_init(r10003243);
        mpfr_init_set_str(r10003244, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10003245, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r10003246);
        mpfr_init(r10003247);
        mpfr_init(r10003248);
        mpfr_init(r10003249);
        mpfr_init(r10003250);
        mpfr_init_set_str(r10003251, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r10003252);
        mpfr_init(r10003253);
        mpfr_init(r10003254);
        mpfr_init_set_str(r10003255, "127.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10003256, "4", 10, MPFR_RNDN);
        mpfr_init(r10003257);
        mpfr_init(r10003258);
        mpfr_init(r10003259);
        mpfr_init_set_str(r10003260, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r10003261);
        mpfr_init(r10003262);
        mpfr_init(r10003263);
        mpfr_init(r10003264);
        mpfr_init(r10003265);
        mpfr_init(r10003266);
        mpfr_init_set_str(r10003267, "3", 10, MPFR_RNDN);
        mpfr_init(r10003268);
        mpfr_init(r10003269);
        mpfr_init_set_str(r10003270, "-6.314286", 10, MPFR_RNDN);
        mpfr_init_set_str(r10003271, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r10003272);
        mpfr_init(r10003273);
        mpfr_init(r10003274);
        mpfr_init(r10003275);
        mpfr_init(r10003276);
        mpfr_init_set_str(r10003277, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r10003278);
        mpfr_init_set_str(r10003279, "-0.133984", 10, MPFR_RNDN);
        mpfr_init(r10003280);
        mpfr_init(r10003281);
        mpfr_init(r10003282);
        mpfr_init(r10003283);
        mpfr_init(r10003284);
        mpfr_init_set_str(r10003285, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r10003286);
        mpfr_init(r10003287);
        mpfr_init_set_str(r10003288, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r10003289);
        mpfr_init(r10003290);
        mpfr_init(r10003291);
        mpfr_init(r10003292);
        mpfr_init_set_str(r10003293, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r10003294);
        mpfr_init(r10003295);
        mpfr_init(r10003296);
        mpfr_init(r10003297);
        mpfr_init(r10003298);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10003240, x, MPFR_RNDN);
        mpfr_mul(r10003241, r10003239, r10003240, MPFR_RNDN);
        mpfr_add(r10003242, r10003238, r10003241, MPFR_RNDN);
        mpfr_mul(r10003243, r10003242, r10003240, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10003246, r10003240, r10003245, MPFR_RNDN);
        mpfr_mul(r10003247, r10003240, r10003240, MPFR_RNDN);
        mpfr_mul(r10003248, r10003246, r10003247, MPFR_RNDN);
        mpfr_add(r10003249, r10003244, r10003248, MPFR_RNDN);
        mpfr_add(r10003250, r10003243, r10003249, MPFR_RNDN);
        ;
        mpfr_mul(r10003252, r10003240, r10003251, MPFR_RNDN);
        mpfr_mul(r10003253, r10003252, r10003247, MPFR_RNDN);
        mpfr_mul(r10003254, r10003247, r10003253, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r10003257, r10003240, r10003256, MPFR_RNDN);
        mpfr_mul(r10003258, r10003255, r10003257, MPFR_RNDN);
        mpfr_add(r10003259, r10003254, r10003258, MPFR_RNDN);
        ;
        mpfr_mul(r10003261, r10003240, r10003260, MPFR_RNDN);
        mpfr_mul(r10003262, r10003240, r10003261, MPFR_RNDN);
        mpfr_mul(r10003263, r10003247, r10003247, MPFR_RNDN);
        mpfr_mul(r10003264, r10003262, r10003263, MPFR_RNDN);
        mpfr_add(r10003265, r10003259, r10003264, MPFR_RNDN);
        mpfr_add(r10003266, r10003250, r10003265, MPFR_RNDN);
        ;
        mpfr_pow(r10003268, r10003240, r10003267, MPFR_RNDN);
        mpfr_mul(r10003269, r10003268, r10003268, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10003272, r10003271, r10003240, MPFR_RNDN);
        mpfr_add(r10003273, r10003270, r10003272, MPFR_RNDN);
        mpfr_mul(r10003274, r10003240, r10003273, MPFR_RNDN);
        mpfr_mul(r10003275, r10003269, r10003274, MPFR_RNDN);
        mpfr_mul(r10003276, r10003263, r10003263, MPFR_RNDN);
        ;
        mpfr_mul(r10003278, r10003247, r10003277, MPFR_RNDN);
        ;
        mpfr_mul(r10003280, r10003279, r10003240, MPFR_RNDN);
        mpfr_add(r10003281, r10003278, r10003280, MPFR_RNDN);
        mpfr_mul(r10003282, r10003276, r10003281, MPFR_RNDN);
        mpfr_add(r10003283, r10003275, r10003282, MPFR_RNDN);
        mpfr_add(r10003284, r10003266, r10003283, MPFR_RNDN);
        ;
        mpfr_mul(r10003286, r10003285, r10003240, MPFR_RNDN);
        mpfr_mul(r10003287, r10003263, r10003286, MPFR_RNDN);
        ;
        mpfr_mul(r10003289, r10003288, r10003247, MPFR_RNDN);
        mpfr_mul(r10003290, r10003263, r10003289, MPFR_RNDN);
        mpfr_add(r10003291, r10003287, r10003290, MPFR_RNDN);
        mpfr_mul(r10003292, r10003269, r10003291, MPFR_RNDN);
        ;
        mpfr_mul(r10003294, r10003293, r10003240, MPFR_RNDN);
        mpfr_mul(r10003295, r10003263, r10003294, MPFR_RNDN);
        mpfr_mul(r10003296, r10003276, r10003295, MPFR_RNDN);
        mpfr_add(r10003297, r10003292, r10003296, MPFR_RNDN);
        mpfr_add(r10003298, r10003284, r10003297, MPFR_RNDN);
        return mpfr_get_d(r10003298, MPFR_RNDN);
}
