#ifndef QES_LIB_QESLIB_HPP
#define QES_LIB_QESLIB_HPP

namespace qeslib {

    namespace ades {
        class Alg {

        };
    }


    namespace xades {

        class Alg : public ades::Alg {

        };

        namespace zap {
            class Alg : public xades::Alg {

            };
        }
    }

    namespace pades {

    }

    namespace cades {

    }

}

#endif //QES_LIB_QESLIB_HPP
