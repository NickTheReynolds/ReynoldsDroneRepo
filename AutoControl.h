class SSModel {
    public:
    
    float A[6][6];
    float B[6][5];
    float C[6][6];
    
    
    float r[6];
    float x[6];
    float e[6];
    
    //Create a linearized state-space model
    void GenLSSM(){

    }

    //Method to write state into the class
    void AssignX(float state[6]){
        for(int i = 0; i <= 6; i++){
            x[i] = state[i];
        }
    }
    
    //Calculate error between the reference and the current state trjectory
    void CalErr(){
        for(int i = 0; i <= 6; i++){
            e[i] = r[i]-x[i];
        }
    }
};