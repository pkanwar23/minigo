// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CC_PLAYER_H_
#define CC_PLAYER_H_

#include <string>

#include "cc/coord.h"

namespace minigo {

class Player {
 public:
  virtual ~Player() = 0;
  virtual void NewGame() = 0;
  virtual Coord SuggestMove() = 0;
  virtual bool PlayMove(Coord c) = 0;
  virtual bool UndoMove() = 0;
  virtual const std::string& name() const = 0;
};

}  // namespace minigo

#endif  // CC_PLAYER_H_
