#pragma once
#include "gSLIC_seg_engine_GPU.h"


namespace gSLIC
{
	namespace engines
	{
		class core_engine
		{
		private:

			seg_engine* slic_seg_engine;

		public:

			core_engine(const objects::settings& in_settings);
			~core_engine();

			// Function to segment in_img
			void Process_Frame(UChar3Image* in_img);

			// Function to get the pointer to the segmented mask image
			const IntImage * Get_Seg_Res();

			// Function to draw segmentation result on out_img
			void Draw_Segmentation_Result(UChar3Image* out_img);

			// Write the segmentation result to a PGM image
			void Write_Seg_Res_To_PGM(const char* fileName);
		};
	}
}

