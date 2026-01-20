# CMakeList.txt : projet CMake pour JeuSFML, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.20)

# Activez Rechargement à chaud pour les compilateurs MSVC si cela est pris en charge.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("JeuSFML")

# Ajoutez une source à l'exécutable de ce projet.
add_executable (JeuSFML "src/JeuSFML.cpp")

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
# Dossier où se trouve SFML 2.6.2
set(SFML_ROOT "C:/Libs/SFML-2.6.2")

# Include + libs SFML
target_include_directories(JeuSFML PRIVATE
    "${SFML_ROOT}/include"
)

target_link_directories(JeuSFML PRIVATE
    "${SFML_ROOT}/lib"
)

target_link_libraries(JeuSFML PRIVATE
    sfml-graphics
    sfml-window
    sfml-system
)