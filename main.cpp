#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>


typedef struct ChainPoint {
    ChainPoint* LinkP;
    void* LinkPoint=NULL;
} ChainPoint;

void* CaoZuo=NULL;



ChainPoint* ForwardP_C=NULL;
ChainPoint* BackP_C=NULL;
void CreateNew() {
    ForwardP_C=new ChainPoint;
    BackP_C->LinkP=ForwardP_C;
    BackP_C=ForwardP_C;
    BackP_C->LinkP=NULL;
}



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
void CreateDustPoint() {
    
    DustPoint* CreateP1=new DustPoint;
    CreateP1->idp=CreateP1;
    
    CreateNew();
    BackP_C->LinkPoint=&(CreateP1->idp);
    
    
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




int main() {
    //开始初始化
    ForwardP_C=new ChainPoint;
    BackP_C=ForwardP_C;
    BackP_C->LinkP=NULL;
    //结束初始化
    CreateDustPoint();
    CreateDustPoint();
    printf("一切正常");
}
