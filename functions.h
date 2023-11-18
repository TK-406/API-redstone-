typedef struct ChainPoint {
    ChainPoint* LinkP=NULL;
    void* LinkPoint=NULL;
    int Type=-1;
} ChainPoint;

ChainPoint* HeadP_CP=NULL;//用于标定链表头
ChainPoint* ForwardP_C=NULL;//用来前进
ChainPoint* BackP_C=NULL;//用来操作


void HyperUpdate(ChainPoint* InputCPP){
    
    DustPoint* DustPointP=NULL;
    switch(InputCPP->Type){
        case 0:
            DustPointP=(DustPoint*)(InputCPP->LinkPoint);
            DustPointP->Update();
            break;
        case 1:
            
            break;
        default:
            break;
    }
}

void MainStart(){
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
void RunRedstone(){
    bool JumpOut=false;
    ChainPoint* ForwardP_CZ=HeadP_CP;
    ChainPoint* BackP_CZ=ForwardP_CZ;
    while(JumpOut!=true){
        usleep(20);
        if(kbhit()!=0){
            JumpOut=true;
        };
        
        if(ForwardP_CZ->LinkP!=NULL){
            ForwardP_CZ=ForwardP_CZ->LinkP;
            HyperUpdate(BackP_CZ);
            
            BackP_CZ=ForwardP_CZ;
        }
        else{
            HyperUpdate(BackP_CZ);
            JumpOut=true;
        };
    }
    exit(0);
}




/*========================以下为创建函数=======================*/


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
    BackP_C->Type=0;
    
}


