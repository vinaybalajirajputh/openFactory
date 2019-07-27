
.. _program_listing_file_src_spide2d_src_backend_sdl_sdlwindow.hpp:

Program Listing for File sdlwindow.hpp
======================================

|exhale_lsh| :ref:`Return to documentation for file <file_src_spide2d_src_backend_sdl_sdlwindow.hpp>` (``src/spide2d/src/backend_sdl/sdlwindow.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #pragma once
   #include <spide2d/window.hpp>
   #include <thread>
   
   namespace spide2d {
   
   struct sdl_window : window {
       sdl_window(int width, int height);
   
   private:
       void init_sdl();
       void start_gl_thread();
       void dispatch_sdl_events();
   
       std::thread gl_thread_;
   };
   
   }  // namespace spide2d
