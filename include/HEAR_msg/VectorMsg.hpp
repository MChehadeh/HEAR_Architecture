#pragma once
#include "HEAR_core/DataMsg.hpp"
#include "HEAR_math/Vector3D.hpp"

class VectorMsg : public DataMsg {
public:
    VectorMsg() {};
    ~VectorMsg() {};
    msg_type getType() {return msg_type::VECTOR;};
    const int getSize() {return sizeof(VectorMsg);};
    Vector3D<float> p1, p2;
};