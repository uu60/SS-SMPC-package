//
// Created by 杜建璋 on 2024/12/2.
//

#ifndef TOARITHEXECUTOR_H
#define TOARITHEXECUTOR_H
#include "compute/BoolExecutor.h"


class BoolToArithExecutor : public BoolExecutor {
private:
    static int32_t _currentObjTag;

public:
    // Temporarily lend zi for xi preparation in super constructor.
    BoolToArithExecutor(int64_t xi, int l, int16_t objTag, int16_t msgTagOffset, int clientRank) : BoolExecutor(
        xi, l, objTag, msgTagOffset, clientRank) {
        _xi = _zi;
    }

    BoolToArithExecutor *execute() override;

    [[nodiscard]] std::string className() const override;

    [[nodiscard]] static int16_t neededMsgTags(int l);
};



#endif //TOARITHEXECUTOR_H