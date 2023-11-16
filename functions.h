typedef struct ChainPoint {
    ChainPoint* LinkP=NULL;
    void* LinkPoint=NULL;
} ChainPoint;

void* CaoZuo=NULL;


ChainPoint* HeadP_CP=NULL;
ChainPoint* ForwardP_C=NULL;
ChainPoint* BackP_C=NULL;


void ChuShiHua(){
    HeadP_CP=new ChainPoint;
    ForwardP_C=HeadP_CP;
    BackP_C=ForwardP_C;
    BackP_C->LinkP=NULL;
}
void MainEnd(){
    ChainPoint* ForwardP_DP=HeadP_CP;
    ChainPoint* BackP_DP=ForwardP_DP;
    while(ForwardP_DP->LinkP!=NULL){
        ForwardP_DP=ForwardP_DP->LinkP;
        delete BackP_DP;
        BackP_DP=ForwardP_DP;
    }
    BackP_DP=ForwardP_DP;
    delete ForwardP_DP;
    ForwardP_DP=NULL;
    BackP_DP=NULL;
}
void Start



void CreateNew() {
    
    ForwardP_C=new ChainPoint;
    BackP_C->LinkP=ForwardP_C;
    BackP_C=ForwardP_C;
    BackP_C->LinkP=NULL;
}


void CreateDustPoint() {
    
    DustPoint* CreateP1=new DustPoint;
    CreateP1->idp=CreateP1;
    
    CreateNew();
    BackP_C->LinkPoint=&(CreateP1->idp);
    
    
}


