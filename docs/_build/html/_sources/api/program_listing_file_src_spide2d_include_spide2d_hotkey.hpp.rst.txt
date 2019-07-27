
.. _program_listing_file_src_spide2d_include_spide2d_hotkey.hpp:

Program Listing for File hotkey.hpp
===================================

|exhale_lsh| :ref:`Return to documentation for file <file_src_spide2d_include_spide2d_hotkey.hpp>` (``src/spide2d/include/spide2d/hotkey.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #pragma once
   
   #include <map>
   #include <string_view>
   
   namespace spide2d {
   
   struct hotkey {
       // std::string_view translate(const SDL_Keysym &sym);
   
       // void add(SDL_Keysym sym, std::string_view hotkey);
   
   private:
       // std::map<SDL_Keysym, std::string> key_translation_;
   };
   
   }  // namespace spide2d
