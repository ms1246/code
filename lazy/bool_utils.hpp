#if !defined(BOOL_UTILS)
#define BOOL_UTILS
#include "utils.hpp"


enum YESNO_CNFG
{
    YN,
    TF
};

/**
 * @brief Convert a boolean to "Yes" or "No".
 * @param thing Boolean input.
 * @param config configurations [YN or TF]
 * @return "Yes" or "True" when true, otherwise "No" or "False".
 */
std::string
yesno(bool thing, YESNO_CNFG config = YN)
{
    if (config == YN)
    {
        return thing ? "Yes" : "No";
    }
    else if (config == TF)
    {
        return thing ? "True" : "False";
    }
    return "";
}


#endif // BOOL_UTILS
