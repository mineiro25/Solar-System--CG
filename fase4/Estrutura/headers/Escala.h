
#ifndef GENERATOR_ESCALA_H
#define GENERATOR_ESCALA_H


class Escala {
    float xe;
    float ye;
    float ze;

    public:
        Escala();

        float getXE();
        float getYE();
        float getZE();
        void insereXE(float x);
        void insereYE(float y);
        void insereZE(float z);
        bool vazioE();
};


#endif //GENERATOR_ESCALA_H
