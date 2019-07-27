
.. _program_listing_file_src_spide2d_include_spide2d_window.hpp:

Program Listing for File window.hpp
===================================

|exhale_lsh| :ref:`Return to documentation for file <file_src_spide2d_include_spide2d_window.hpp>` (``src/spide2d/include/spide2d/window.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #pragma once
   #include "hotkey.hpp"
   
   #include <boost/signals2.hpp>
   
   namespace spide2d {
   
   struct window {
       window(int width, int height);
   
       boost::signals2::signal<void()> key_pressed;
       boost::signals2::signal<void()> key_released;
   
   protected:
   };
   
   }  // namespace spide2d
