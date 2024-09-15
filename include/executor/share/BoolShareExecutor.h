//
// Created by 杜建璋 on 2024/9/6.
//

#ifndef MPC_PACKAGE_BOOLSHAREEXECUTOR_H
#define MPC_PACKAGE_BOOLSHAREEXECUTOR_H

#include "../../executor/Executor.h"

class BoolShareExecutor : public Executor<bool> {
protected:
    bool _xi{};
    bool _yi{};
    bool _zi{};
public:
    BoolShareExecutor(bool x, bool y);

    BoolShareExecutor(bool xi, bool yi, bool dummy);

    BoolShareExecutor *reconstruct() override;

    BoolShareExecutor *execute(bool reconstruct) override;

protected:
    [[nodiscard]] std::string tag() const override;
};


#endif //MPC_PACKAGE_BOOLSHAREEXECUTOR_H
