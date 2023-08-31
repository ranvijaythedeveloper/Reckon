workspace "ReckonEngine"
    architecture "x64"

    configurations 
    {
        "Debug",
        "Release",
        "Dist"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "ReckonEngine"
    location "ReckonEngine"
    kind "SharedLib"
    language "C++"

    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}") -- Corrected objdir path

    pchheader "rckpch.h"
    pchsource "Reckon/src/rckpch.cpp"

    files 
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp",
        "%{prj.name}/cpp.hint"

    }

    includedirs 
    {
        "%{prj.name}/src",
        "%{prj.name}/vendor/spdlog/include"
    }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        defines
        {
            "RCK_PLATFORM_WINDOWS",
            "RCK_BUILD_DLL"
        }

    filter "configurations:Debug"
        defines "RCK_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "RCK_RELEASE"
        optimize "On"

    filter "configurations:Dist"
        defines "RCK_DEBUG"
        optimize "On"

-- Fix the postbuildcommands section
postbuildcommands
{
    ("{COPY} %{cfg.buildtarget.relpath} \"../bin/" .. outputdir .. "/Sandbox/\"") -- Corrected command
}

project "Sandbox"
    location "Sandbox"
    kind "ConsoleApp"
    language "C++"

    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}") -- Corrected objdir path

    files 
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs 
    {
        "ReckonEngine/vendor/spdlog/include",
        "ReckonEngine/src"
    }

    links
    {
        "ReckonEngine"
    }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        defines
        {
            "RCK_PLATFORM_WINDOWS"
        }

    filter "configurations:Debug"
        defines "RCK_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "RCK_RELEASE"
        optimize "On"

    filter "configurations:Dist"
        defines "RCK_DEBUG"
        optimize "On"
