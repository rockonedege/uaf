/* This file is part of the UAF (Unified Architecture Framework) project.
 *
 * Copyright (C) 2012 Wim Pessemier (Institute of Astronomy, KULeuven)
 *
 * Project website: http://www.ster.kuleuven.be/uaf
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef UAF_PKIPRIVATEKEY_H_
#define UAF_PKIPRIVATEKEY_H_


// STD
#include <string>
#include <sstream>
#include <vector>
#include <stdint.h>
// SDK
#include "uapkicpp/uapkiprivatekey.h"
// UAF
#include "uaf/util/util.h"


namespace uaf
{

    /*******************************************************************************************//**
    * A PkiPrivateKey is just a container for a private key.
    *
    * @ingroup Util
    ***********************************************************************************************/
    class UAF_EXPORT PkiPrivateKey
    {
    public:

        /**
         * Create an empty key.
         */
        PkiPrivateKey() {}

        /**
         * Create a key based on an SDK instance.
         */
        PkiPrivateKey(const UaPkiPrivateKey& uaKey) : uaPkiPrivateKey_(uaKey) {}


    private:
        // make it a friend of PkiRsaKeyPair and PkiCertificate so these can access the stack
        // key directly
        friend class PkiRsaKeyPair;
        friend class PkiCertificate;

        UaPkiPrivateKey uaPkiPrivateKey_;
    };


}



#endif /* UAF_PKIPRIVATEKEY_H_ */
