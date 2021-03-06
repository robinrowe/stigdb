/* <stig/type/int.h> 

   TODO

   Copyright 2010-2014 Tagged
   
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
   
     http://www.apache.org/licenses/LICENSE-2.0
   
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */

#pragma once

#include <stig/type/managed_type.h>

namespace Stig {

  namespace Type {

    class TInt : public TSingletonType<TInt> {
      NO_COPY_SEMANTICS(TInt);

      public:
      virtual ~TInt();

      private:
      TInt() {}

      virtual void Write(std::ostream &stream) const;

      friend class TSingletonType<TInt>;
    };  // TInt

  }  // Type

}  // Stig
