#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r13460812 = 1.0;
        float r13460813 = -12.0;
        float r13460814 = x;
        float r13460815 = r13460813 * r13460814;
        float r13460816 = r13460812 + r13460815;
        float r13460817 = 33.0;
        float r13460818 = r13460814 * r13460814;
        float r13460819 = r13460817 * r13460818;
        float r13460820 = r13460816 + r13460819;
        float r13460821 = -36.666667;
        float r13460822 = r13460818 * r13460814;
        float r13460823 = r13460821 * r13460822;
        float r13460824 = r13460820 + r13460823;
        float r13460825 = 20.625;
        float r13460826 = r13460822 * r13460814;
        float r13460827 = r13460825 * r13460826;
        float r13460828 = r13460824 + r13460827;
        float r13460829 = -6.6;
        float r13460830 = r13460826 * r13460814;
        float r13460831 = r13460829 * r13460830;
        float r13460832 = r13460828 + r13460831;
        float r13460833 = 1.283333;
        float r13460834 = r13460830 * r13460814;
        float r13460835 = r13460833 * r13460834;
        float r13460836 = r13460832 + r13460835;
        float r13460837 = -0.157143;
        float r13460838 = r13460834 * r13460814;
        float r13460839 = r13460837 * r13460838;
        float r13460840 = r13460836 + r13460839;
        float r13460841 = 0.012277;
        float r13460842 = r13460838 * r13460814;
        float r13460843 = r13460841 * r13460842;
        float r13460844 = r13460840 + r13460843;
        float r13460845 = -0.000606;
        float r13460846 = r13460842 * r13460814;
        float r13460847 = r13460845 * r13460846;
        float r13460848 = r13460844 + r13460847;
        float r13460849 = 1.8e-05;
        float r13460850 = r13460846 * r13460814;
        float r13460851 = r13460849 * r13460850;
        float r13460852 = r13460848 + r13460851;
        return r13460852;
}

double f_id(double x) {
        double r13460853 = 1.0;
        double r13460854 = -12.0;
        double r13460855 = x;
        double r13460856 = r13460854 * r13460855;
        double r13460857 = r13460853 + r13460856;
        double r13460858 = 33.0;
        double r13460859 = r13460855 * r13460855;
        double r13460860 = r13460858 * r13460859;
        double r13460861 = r13460857 + r13460860;
        double r13460862 = -36.666667;
        double r13460863 = r13460859 * r13460855;
        double r13460864 = r13460862 * r13460863;
        double r13460865 = r13460861 + r13460864;
        double r13460866 = 20.625;
        double r13460867 = r13460863 * r13460855;
        double r13460868 = r13460866 * r13460867;
        double r13460869 = r13460865 + r13460868;
        double r13460870 = -6.6;
        double r13460871 = r13460867 * r13460855;
        double r13460872 = r13460870 * r13460871;
        double r13460873 = r13460869 + r13460872;
        double r13460874 = 1.283333;
        double r13460875 = r13460871 * r13460855;
        double r13460876 = r13460874 * r13460875;
        double r13460877 = r13460873 + r13460876;
        double r13460878 = -0.157143;
        double r13460879 = r13460875 * r13460855;
        double r13460880 = r13460878 * r13460879;
        double r13460881 = r13460877 + r13460880;
        double r13460882 = 0.012277;
        double r13460883 = r13460879 * r13460855;
        double r13460884 = r13460882 * r13460883;
        double r13460885 = r13460881 + r13460884;
        double r13460886 = -0.000606;
        double r13460887 = r13460883 * r13460855;
        double r13460888 = r13460886 * r13460887;
        double r13460889 = r13460885 + r13460888;
        double r13460890 = 1.8e-05;
        double r13460891 = r13460887 * r13460855;
        double r13460892 = r13460890 * r13460891;
        double r13460893 = r13460889 + r13460892;
        return r13460893;
}


double f_of(float x) {
        float r13460894 = x;
        float r13460895 = -0.000606;
        float r13460896 = r13460894 * r13460895;
        float r13460897 = 0.012277;
        float r13460898 = r13460896 + r13460897;
        float r13460899 = r13460894 * r13460894;
        float r13460900 = 1;
        float r13460901 = 3;
        float r13460902 = r13460900 + r13460901;
        float r13460903 = pow(r13460899, r13460902);
        float r13460904 = r13460898 * r13460903;
        float r13460905 = -36.666667;
        float r13460906 = r13460894 * r13460905;
        float r13460907 = 33.0;
        float r13460908 = r13460906 + r13460907;
        float r13460909 = r13460908 * r13460899;
        float r13460910 = cbrt(r13460909);
        float r13460911 = r13460910 * r13460910;
        float r13460912 = r13460911 * r13460910;
        float r13460913 = -12.0;
        float r13460914 = r13460913 * r13460894;
        float r13460915 = 1.0;
        float r13460916 = r13460914 + r13460915;
        float r13460917 = r13460912 + r13460916;
        float r13460918 = r13460904 + r13460917;
        float r13460919 = pow(r13460894, r13460901);
        float r13460920 = r13460919 * r13460919;
        float r13460921 = 1.8e-05;
        float r13460922 = 4;
        float r13460923 = pow(r13460894, r13460922);
        float r13460924 = r13460921 * r13460923;
        float r13460925 = r13460920 * r13460924;
        float r13460926 = 1.283333;
        float r13460927 = -0.157143;
        float r13460928 = r13460927 * r13460894;
        float r13460929 = r13460926 + r13460928;
        float r13460930 = r13460929 * r13460920;
        float r13460931 = r13460899 * r13460899;
        float r13460932 = -6.6;
        float r13460933 = r13460894 * r13460932;
        float r13460934 = 20.625;
        float r13460935 = r13460933 + r13460934;
        float r13460936 = r13460931 * r13460935;
        float r13460937 = r13460930 + r13460936;
        float r13460938 = r13460925 + r13460937;
        float r13460939 = r13460918 + r13460938;
        return r13460939;
}

double f_od(double x) {
        double r13460940 = x;
        double r13460941 = -0.000606;
        double r13460942 = r13460940 * r13460941;
        double r13460943 = 0.012277;
        double r13460944 = r13460942 + r13460943;
        double r13460945 = r13460940 * r13460940;
        double r13460946 = 1;
        double r13460947 = 3;
        double r13460948 = r13460946 + r13460947;
        double r13460949 = pow(r13460945, r13460948);
        double r13460950 = r13460944 * r13460949;
        double r13460951 = -36.666667;
        double r13460952 = r13460940 * r13460951;
        double r13460953 = 33.0;
        double r13460954 = r13460952 + r13460953;
        double r13460955 = r13460954 * r13460945;
        double r13460956 = cbrt(r13460955);
        double r13460957 = r13460956 * r13460956;
        double r13460958 = r13460957 * r13460956;
        double r13460959 = -12.0;
        double r13460960 = r13460959 * r13460940;
        double r13460961 = 1.0;
        double r13460962 = r13460960 + r13460961;
        double r13460963 = r13460958 + r13460962;
        double r13460964 = r13460950 + r13460963;
        double r13460965 = pow(r13460940, r13460947);
        double r13460966 = r13460965 * r13460965;
        double r13460967 = 1.8e-05;
        double r13460968 = 4;
        double r13460969 = pow(r13460940, r13460968);
        double r13460970 = r13460967 * r13460969;
        double r13460971 = r13460966 * r13460970;
        double r13460972 = 1.283333;
        double r13460973 = -0.157143;
        double r13460974 = r13460973 * r13460940;
        double r13460975 = r13460972 + r13460974;
        double r13460976 = r13460975 * r13460966;
        double r13460977 = r13460945 * r13460945;
        double r13460978 = -6.6;
        double r13460979 = r13460940 * r13460978;
        double r13460980 = 20.625;
        double r13460981 = r13460979 + r13460980;
        double r13460982 = r13460977 * r13460981;
        double r13460983 = r13460976 + r13460982;
        double r13460984 = r13460971 + r13460983;
        double r13460985 = r13460964 + r13460984;
        return r13460985;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r13460986, r13460987, r13460988, r13460989, r13460990, r13460991, r13460992, r13460993, r13460994, r13460995, r13460996, r13460997, r13460998, r13460999, r13461000, r13461001, r13461002, r13461003, r13461004, r13461005, r13461006, r13461007, r13461008, r13461009, r13461010, r13461011, r13461012, r13461013, r13461014, r13461015, r13461016, r13461017, r13461018, r13461019, r13461020, r13461021, r13461022, r13461023, r13461024, r13461025, r13461026;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13460986, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13460987, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r13460988);
        mpfr_init(r13460989);
        mpfr_init(r13460990);
        mpfr_init_set_str(r13460991, "33.0", 10, MPFR_RNDN);
        mpfr_init(r13460992);
        mpfr_init(r13460993);
        mpfr_init(r13460994);
        mpfr_init_set_str(r13460995, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r13460996);
        mpfr_init(r13460997);
        mpfr_init(r13460998);
        mpfr_init_set_str(r13460999, "20.625", 10, MPFR_RNDN);
        mpfr_init(r13461000);
        mpfr_init(r13461001);
        mpfr_init(r13461002);
        mpfr_init_set_str(r13461003, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r13461004);
        mpfr_init(r13461005);
        mpfr_init(r13461006);
        mpfr_init_set_str(r13461007, "1.283333", 10, MPFR_RNDN);
        mpfr_init(r13461008);
        mpfr_init(r13461009);
        mpfr_init(r13461010);
        mpfr_init_set_str(r13461011, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r13461012);
        mpfr_init(r13461013);
        mpfr_init(r13461014);
        mpfr_init_set_str(r13461015, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r13461016);
        mpfr_init(r13461017);
        mpfr_init(r13461018);
        mpfr_init_set_str(r13461019, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r13461020);
        mpfr_init(r13461021);
        mpfr_init(r13461022);
        mpfr_init_set_str(r13461023, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r13461024);
        mpfr_init(r13461025);
        mpfr_init(r13461026);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r13460988, x, MPFR_RNDN);
        mpfr_mul(r13460989, r13460987, r13460988, MPFR_RNDN);
        mpfr_add(r13460990, r13460986, r13460989, MPFR_RNDN);
        ;
        mpfr_mul(r13460992, r13460988, r13460988, MPFR_RNDN);
        mpfr_mul(r13460993, r13460991, r13460992, MPFR_RNDN);
        mpfr_add(r13460994, r13460990, r13460993, MPFR_RNDN);
        ;
        mpfr_mul(r13460996, r13460992, r13460988, MPFR_RNDN);
        mpfr_mul(r13460997, r13460995, r13460996, MPFR_RNDN);
        mpfr_add(r13460998, r13460994, r13460997, MPFR_RNDN);
        ;
        mpfr_mul(r13461000, r13460996, r13460988, MPFR_RNDN);
        mpfr_mul(r13461001, r13460999, r13461000, MPFR_RNDN);
        mpfr_add(r13461002, r13460998, r13461001, MPFR_RNDN);
        ;
        mpfr_mul(r13461004, r13461000, r13460988, MPFR_RNDN);
        mpfr_mul(r13461005, r13461003, r13461004, MPFR_RNDN);
        mpfr_add(r13461006, r13461002, r13461005, MPFR_RNDN);
        ;
        mpfr_mul(r13461008, r13461004, r13460988, MPFR_RNDN);
        mpfr_mul(r13461009, r13461007, r13461008, MPFR_RNDN);
        mpfr_add(r13461010, r13461006, r13461009, MPFR_RNDN);
        ;
        mpfr_mul(r13461012, r13461008, r13460988, MPFR_RNDN);
        mpfr_mul(r13461013, r13461011, r13461012, MPFR_RNDN);
        mpfr_add(r13461014, r13461010, r13461013, MPFR_RNDN);
        ;
        mpfr_mul(r13461016, r13461012, r13460988, MPFR_RNDN);
        mpfr_mul(r13461017, r13461015, r13461016, MPFR_RNDN);
        mpfr_add(r13461018, r13461014, r13461017, MPFR_RNDN);
        ;
        mpfr_mul(r13461020, r13461016, r13460988, MPFR_RNDN);
        mpfr_mul(r13461021, r13461019, r13461020, MPFR_RNDN);
        mpfr_add(r13461022, r13461018, r13461021, MPFR_RNDN);
        ;
        mpfr_mul(r13461024, r13461020, r13460988, MPFR_RNDN);
        mpfr_mul(r13461025, r13461023, r13461024, MPFR_RNDN);
        mpfr_add(r13461026, r13461022, r13461025, MPFR_RNDN);
        return mpfr_get_d(r13461026, MPFR_RNDN);
}

static mpfr_t r13461027, r13461028, r13461029, r13461030, r13461031, r13461032, r13461033, r13461034, r13461035, r13461036, r13461037, r13461038, r13461039, r13461040, r13461041, r13461042, r13461043, r13461044, r13461045, r13461046, r13461047, r13461048, r13461049, r13461050, r13461051, r13461052, r13461053, r13461054, r13461055, r13461056, r13461057, r13461058, r13461059, r13461060, r13461061, r13461062, r13461063, r13461064, r13461065, r13461066, r13461067, r13461068, r13461069, r13461070, r13461071, r13461072;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r13461027);
        mpfr_init_set_str(r13461028, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r13461029);
        mpfr_init_set_str(r13461030, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r13461031);
        mpfr_init(r13461032);
        mpfr_init_set_str(r13461033, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r13461034, "3", 10, MPFR_RNDN);
        mpfr_init(r13461035);
        mpfr_init(r13461036);
        mpfr_init(r13461037);
        mpfr_init_set_str(r13461038, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r13461039);
        mpfr_init_set_str(r13461040, "33.0", 10, MPFR_RNDN);
        mpfr_init(r13461041);
        mpfr_init(r13461042);
        mpfr_init(r13461043);
        mpfr_init(r13461044);
        mpfr_init(r13461045);
        mpfr_init_set_str(r13461046, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r13461047);
        mpfr_init_set_str(r13461048, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13461049);
        mpfr_init(r13461050);
        mpfr_init(r13461051);
        mpfr_init(r13461052);
        mpfr_init(r13461053);
        mpfr_init_set_str(r13461054, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init_set_str(r13461055, "4", 10, MPFR_RNDN);
        mpfr_init(r13461056);
        mpfr_init(r13461057);
        mpfr_init(r13461058);
        mpfr_init_set_str(r13461059, "1.283333", 10, MPFR_RNDN);
        mpfr_init_set_str(r13461060, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r13461061);
        mpfr_init(r13461062);
        mpfr_init(r13461063);
        mpfr_init(r13461064);
        mpfr_init_set_str(r13461065, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r13461066);
        mpfr_init_set_str(r13461067, "20.625", 10, MPFR_RNDN);
        mpfr_init(r13461068);
        mpfr_init(r13461069);
        mpfr_init(r13461070);
        mpfr_init(r13461071);
        mpfr_init(r13461072);
}

double f_fm(double x) {
        mpfr_set_d(r13461027, x, MPFR_RNDN);
        ;
        mpfr_mul(r13461029, r13461027, r13461028, MPFR_RNDN);
        ;
        mpfr_add(r13461031, r13461029, r13461030, MPFR_RNDN);
        mpfr_mul(r13461032, r13461027, r13461027, MPFR_RNDN);
        ;
        ;
        mpfr_add(r13461035, r13461033, r13461034, MPFR_RNDN);
        mpfr_pow(r13461036, r13461032, r13461035, MPFR_RNDN);
        mpfr_mul(r13461037, r13461031, r13461036, MPFR_RNDN);
        ;
        mpfr_mul(r13461039, r13461027, r13461038, MPFR_RNDN);
        ;
        mpfr_add(r13461041, r13461039, r13461040, MPFR_RNDN);
        mpfr_mul(r13461042, r13461041, r13461032, MPFR_RNDN);
        mpfr_cbrt(r13461043, r13461042, MPFR_RNDN);
        mpfr_mul(r13461044, r13461043, r13461043, MPFR_RNDN);
        mpfr_mul(r13461045, r13461044, r13461043, MPFR_RNDN);
        ;
        mpfr_mul(r13461047, r13461046, r13461027, MPFR_RNDN);
        ;
        mpfr_add(r13461049, r13461047, r13461048, MPFR_RNDN);
        mpfr_add(r13461050, r13461045, r13461049, MPFR_RNDN);
        mpfr_add(r13461051, r13461037, r13461050, MPFR_RNDN);
        mpfr_pow(r13461052, r13461027, r13461034, MPFR_RNDN);
        mpfr_mul(r13461053, r13461052, r13461052, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r13461056, r13461027, r13461055, MPFR_RNDN);
        mpfr_mul(r13461057, r13461054, r13461056, MPFR_RNDN);
        mpfr_mul(r13461058, r13461053, r13461057, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r13461061, r13461060, r13461027, MPFR_RNDN);
        mpfr_add(r13461062, r13461059, r13461061, MPFR_RNDN);
        mpfr_mul(r13461063, r13461062, r13461053, MPFR_RNDN);
        mpfr_mul(r13461064, r13461032, r13461032, MPFR_RNDN);
        ;
        mpfr_mul(r13461066, r13461027, r13461065, MPFR_RNDN);
        ;
        mpfr_add(r13461068, r13461066, r13461067, MPFR_RNDN);
        mpfr_mul(r13461069, r13461064, r13461068, MPFR_RNDN);
        mpfr_add(r13461070, r13461063, r13461069, MPFR_RNDN);
        mpfr_add(r13461071, r13461058, r13461070, MPFR_RNDN);
        mpfr_add(r13461072, r13461051, r13461071, MPFR_RNDN);
        return mpfr_get_d(r13461072, MPFR_RNDN);
}

static mpfr_t r13461073, r13461074, r13461075, r13461076, r13461077, r13461078, r13461079, r13461080, r13461081, r13461082, r13461083, r13461084, r13461085, r13461086, r13461087, r13461088, r13461089, r13461090, r13461091, r13461092, r13461093, r13461094, r13461095, r13461096, r13461097, r13461098, r13461099, r13461100, r13461101, r13461102, r13461103, r13461104, r13461105, r13461106, r13461107, r13461108, r13461109, r13461110, r13461111, r13461112, r13461113, r13461114, r13461115, r13461116, r13461117, r13461118;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r13461073);
        mpfr_init_set_str(r13461074, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r13461075);
        mpfr_init_set_str(r13461076, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r13461077);
        mpfr_init(r13461078);
        mpfr_init_set_str(r13461079, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r13461080, "3", 10, MPFR_RNDN);
        mpfr_init(r13461081);
        mpfr_init(r13461082);
        mpfr_init(r13461083);
        mpfr_init_set_str(r13461084, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r13461085);
        mpfr_init_set_str(r13461086, "33.0", 10, MPFR_RNDN);
        mpfr_init(r13461087);
        mpfr_init(r13461088);
        mpfr_init(r13461089);
        mpfr_init(r13461090);
        mpfr_init(r13461091);
        mpfr_init_set_str(r13461092, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r13461093);
        mpfr_init_set_str(r13461094, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13461095);
        mpfr_init(r13461096);
        mpfr_init(r13461097);
        mpfr_init(r13461098);
        mpfr_init(r13461099);
        mpfr_init_set_str(r13461100, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init_set_str(r13461101, "4", 10, MPFR_RNDN);
        mpfr_init(r13461102);
        mpfr_init(r13461103);
        mpfr_init(r13461104);
        mpfr_init_set_str(r13461105, "1.283333", 10, MPFR_RNDN);
        mpfr_init_set_str(r13461106, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r13461107);
        mpfr_init(r13461108);
        mpfr_init(r13461109);
        mpfr_init(r13461110);
        mpfr_init_set_str(r13461111, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r13461112);
        mpfr_init_set_str(r13461113, "20.625", 10, MPFR_RNDN);
        mpfr_init(r13461114);
        mpfr_init(r13461115);
        mpfr_init(r13461116);
        mpfr_init(r13461117);
        mpfr_init(r13461118);
}

double f_dm(double x) {
        mpfr_set_d(r13461073, x, MPFR_RNDN);
        ;
        mpfr_mul(r13461075, r13461073, r13461074, MPFR_RNDN);
        ;
        mpfr_add(r13461077, r13461075, r13461076, MPFR_RNDN);
        mpfr_mul(r13461078, r13461073, r13461073, MPFR_RNDN);
        ;
        ;
        mpfr_add(r13461081, r13461079, r13461080, MPFR_RNDN);
        mpfr_pow(r13461082, r13461078, r13461081, MPFR_RNDN);
        mpfr_mul(r13461083, r13461077, r13461082, MPFR_RNDN);
        ;
        mpfr_mul(r13461085, r13461073, r13461084, MPFR_RNDN);
        ;
        mpfr_add(r13461087, r13461085, r13461086, MPFR_RNDN);
        mpfr_mul(r13461088, r13461087, r13461078, MPFR_RNDN);
        mpfr_cbrt(r13461089, r13461088, MPFR_RNDN);
        mpfr_mul(r13461090, r13461089, r13461089, MPFR_RNDN);
        mpfr_mul(r13461091, r13461090, r13461089, MPFR_RNDN);
        ;
        mpfr_mul(r13461093, r13461092, r13461073, MPFR_RNDN);
        ;
        mpfr_add(r13461095, r13461093, r13461094, MPFR_RNDN);
        mpfr_add(r13461096, r13461091, r13461095, MPFR_RNDN);
        mpfr_add(r13461097, r13461083, r13461096, MPFR_RNDN);
        mpfr_pow(r13461098, r13461073, r13461080, MPFR_RNDN);
        mpfr_mul(r13461099, r13461098, r13461098, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r13461102, r13461073, r13461101, MPFR_RNDN);
        mpfr_mul(r13461103, r13461100, r13461102, MPFR_RNDN);
        mpfr_mul(r13461104, r13461099, r13461103, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r13461107, r13461106, r13461073, MPFR_RNDN);
        mpfr_add(r13461108, r13461105, r13461107, MPFR_RNDN);
        mpfr_mul(r13461109, r13461108, r13461099, MPFR_RNDN);
        mpfr_mul(r13461110, r13461078, r13461078, MPFR_RNDN);
        ;
        mpfr_mul(r13461112, r13461073, r13461111, MPFR_RNDN);
        ;
        mpfr_add(r13461114, r13461112, r13461113, MPFR_RNDN);
        mpfr_mul(r13461115, r13461110, r13461114, MPFR_RNDN);
        mpfr_add(r13461116, r13461109, r13461115, MPFR_RNDN);
        mpfr_add(r13461117, r13461104, r13461116, MPFR_RNDN);
        mpfr_add(r13461118, r13461097, r13461117, MPFR_RNDN);
        return mpfr_get_d(r13461118, MPFR_RNDN);
}

