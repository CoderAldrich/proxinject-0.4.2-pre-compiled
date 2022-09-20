// Copyright 2022 PragmaTwice
//
// Licensed under the Apache License,
// Version 2.0(the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <Windows.h>

#if defined(_WIN64)
#error "expected x86 environment for wow64"
#endif

int main(int argc, char *argv[]) {
  const char *lib = argc > 2 ? argv[2] : "kernel32.dll",
             *func = argc > 1 ? argv[1] : "LoadLibraryW";
  return (int)GetProcAddress(GetModuleHandleA(lib), func);
}
