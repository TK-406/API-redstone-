class DustPoint {
public:
    DustPoint* idp;
    int QiangDu=0;
    int ChuanRu[6]= {0,0,0,0,0,0}; //前后左右上下
    int* ChuanChu[6]= {NULL,NULL,NULL,NULL,NULL,NULL};
    void ChuanDao() {
        int ZuiDa=0;
        for(int count1=0; count1<6; count1++) {
            if(ChuanRu[count1]>ZuiDa) {
                ZuiDa=ChuanRu[count1];
            };
        }
        if(ZuiDa>0) {
            for(int count1=0; count1<6; count1++) {
                if(ChuanChu[count1]!=NULL) {
                    *(ChuanChu[count1])=ZuiDa-1;
                };
            }
        };
    };
};






class DustLine {
public:
    DustLine* idp;
    int ChangDu;
    void ChuanDao() {

    };
};

class Repeater {
public:
    Repeater* idp;
    int PauseMode=0;
    int ChuanRu[6]= {0,0,0,0,0,0};
    int* ChuanChu[6]= {NULL,NULL,NULL,NULL,NULL,NULL};
    void ChuanDao() {
        if(ChuanRu[1]!=0) {
            *(ChuanChu[0])=15;
        };
    };
};
