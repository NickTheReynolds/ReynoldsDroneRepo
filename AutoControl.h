class SSModel {
    public:
    
    float A[6][6];
    float B[6][5];
    float C[6][6];
    
    
    float r[6];
    float x[6];
    float e[6];
    
    void GenLSSM(){

    }

    void CalErr(){
        for(int i = 0; i <= 6; i++){
            e[i] = r[i]-x[i];
        }
    }

    void AssignX(float state[6]){
        for(int i = 0; i <= 6; i++){
            x[i] = state[i];
        }
    }
    

};