// =====================================================================================
// https://github.com/pelocpp // https://peterloos.de
// =====================================================================================

#include <memory>
#include <print>
#include <span>
#include <string>
#include <string_view>
#include <vector>
#include <print> 

#define MessageText "Collection of Modern C++ Code Examples - Copyright (C) 2026 Peter Loos."

#pragma message(MessageText)

int main()
{
    std::println(MessageText);

    // main entry points code snippets
    try
    {
    }
    catch (const std::exception& ex) {
        std::println("Exception: {}", ex.what());
    }

    std::println("Done.");
    return 0;
}

// =====================================================================================
// End-of-File
// =====================================================================================
