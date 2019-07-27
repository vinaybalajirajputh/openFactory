
.. _program_listing_file_src_spide2d_include_spide2d_key.hpp:

Program Listing for File key.hpp
================================

|exhale_lsh| :ref:`Return to documentation for file <file_src_spide2d_include_spide2d_key.hpp>` (``src/spide2d/include/spide2d/key.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #pragma once
   #include <string>
   
   namespace spide2d {
   
   struct key {
       [[nodiscard]] std::string human_readable() const;
   
       [[nodiscard]] static key create_from_human_readable(std::string_view key_name);
   
   private:
       key() = default;
   };
   
   }  // namespace spide2d
