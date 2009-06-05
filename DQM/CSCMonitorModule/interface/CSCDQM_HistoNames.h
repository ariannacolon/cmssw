/*
 * =====================================================================================
 *
 *       Filename:  HistoNames.h
 *
 *    Description:  Histogram names for Global DQM 
 *
 *        Version:  1.0
 *        Created:  10/03/2008 11:54:31 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Valdas Rapsevicius (VR), Valdas.Rapsevicius@cern.ch
 *        Company:  CERN, CH
 *
 * =====================================================================================
 */

#ifndef CSCDQM_HistoNames_H
#define CSCDQM_HistoNames_H 

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/seq/for_each_i.hpp>
#include <boost/preprocessor/control/if.hpp>
#include <boost/preprocessor/comparison/less.hpp>
#include <boost/preprocessor/punctuation/comma_if.hpp>
#include <boost/preprocessor/arithmetic/inc.hpp>

namespace h {

#define CONFIG_HISTONAMES_SEQ \
  \
  \
  (( CSC_ACTUAL_DMB_CFEB_DAV_FREQUENCY, "Actual_DMB_CFEB_DAV_Frequency" )) \
  (( CSC_ACTUAL_DMB_CFEB_DAV_MULTIPLICITY_FREQUENCY, "Actual_DMB_CFEB_DAV_multiplicity_Frequency" )) \
  (( CSC_ACTUAL_DMB_CFEB_DAV_MULTIPLICITY_RATE, "Actual_DMB_CFEB_DAV_multiplicity_Rate" )) \
  (( CSC_ACTUAL_DMB_CFEB_DAV_RATE, "Actual_DMB_CFEB_DAV_Rate" )) \
  (( CSC_ACTUAL_DMB_FEB_COMBINATIONS_DAV_FREQUENCY, "Actual_DMB_FEB_Combinations_DAV_Frequency" )) \
  (( CSC_ACTUAL_DMB_FEB_COMBINATIONS_DAV_RATE, "Actual_DMB_FEB_Combinations_DAV_Rate" )) \
  (( CSC_ACTUAL_DMB_FEB_DAV_FREQUENCY, "Actual_DMB_FEB_DAV_Frequency" )) \
  (( CSC_ACTUAL_DMB_FEB_DAV_RATE, "Actual_DMB_FEB_DAV_Rate" )) \
  (( CSC_ALCT1_VS_ALCT0_KEYWG, "ALCT1_vs_ALCT0_KeyWG" )) \
  (( CSC_ALCT_BXN, "ALCT_BXN" )) \
  (( CSC_ALCT_BXN_VS_DMB_BXN, "ALCT_BXN_vs_DMB_BXN" )) \
  (( CSC_ALCT_DMB_BXN_DIFF, "ALCT_DMB_BXN_diff" )) \
  (( CSC_ALCT_DMB_L1A_DIFF, "ALCT_DMB_L1A_diff" )) \
  (( CSC_ALCT_L1A, "ALCT_L1A" )) \
  (( CSC_ALCT_LYXX_EFFICIENCY, "ALCT_Ly%d_Efficiency" )) \
  (( CSC_ALCT_LYXX_RATE, "ALCT_Ly%d_Rate" )) \
  (( CSC_ALCT_MATCH_TIME, "ALCT_Match_Time" )) \
  (( CSC_ALCT_NUMBER_EFFICIENCY, "ALCT_Number_Efficiency" )) \
  (( CSC_ALCT_NUMBER_OF_LAYERS_WITH_HITS, "ALCT_Number_Of_Layers_With_Hits" )) \
  (( CSC_ALCT_NUMBER_OF_WIREGROUPS_WITH_HITS, "ALCT_Number_Of_WireGroups_With_Hits" )) \
  (( CSC_ALCT_NUMBER_RATE, "ALCT_Number_Rate" )) \
  (( CSC_ALCTTIME_LYXX, "ALCTTime_Ly%d" )) \
  (( CSC_ALCTTIME_LYXX_PROFILE, "ALCTTime_Ly%d_Profile" )) \
  (( CSC_ALCT_WORD_COUNT, "ALCT_Word_Count" )) \
  (( CSC_ALCTXX_BXN, "ALCT%d_BXN" )) \
  (( CSC_ALCTXX_DTIME, "ALCT%d_dTime" )) \
  (( CSC_ALCTXX_DTIME_PROFILE, "ALCT%d_dTime_Profile" )) \
  (( CSC_ALCTXX_DTIME_VS_KEYWG, "ALCT%d_dTime_vs_KeyWG" )) \
  (( CSC_ALCTXX_KEYWG, "ALCT%d_KeyWG" )) \
  (( CSC_ALCTXX_PATTERN, "ALCT%d_Pattern" )) \
  (( CSC_ALCTXX_QUALITY, "ALCT%d_Quality" )) \
  (( CSC_ALCTXX_QUALITY_PROFILE, "ALCT%d_Quality_Profile" )) \
  (( CSC_BINCHECK_DATAFLOW_PROBLEMS_FREQUENCY, "BinCheck_DataFlow_Problems_Frequency" )) \
  (( CSC_BINCHECK_DATAFLOW_PROBLEMS_TABLE, "BinCheck_DataFlow_Problems_Table" )) \
  (( CSC_BINCHECK_ERRORS_FREQUENCY, "BinCheck_Errors_Frequency" )) \
  (( CSC_BINCHECK_ERRORSTAT_TABLE, "BinCheck_ErrorStat_Table" )) \
  (( CSC_CFEB_ACTIVE_SAMPLES_VS_STRIP_LYXX, "CFEB_Active_Samples_vs_Strip_Ly%d" )) \
  (( CSC_CFEB_ACTIVE_SAMPLES_VS_STRIP_LYXX_PROFILE, "CFEB_Active_Samples_vs_Strip_Ly%d_Profile" )) \
  (( CSC_CFEB_ACTIVESTRIPS_LYXX, "CFEB_ActiveStrips_Ly%d" )) \
  (( CSC_CFEB_CLUSTER_DURATION_LY_XX, "CFEB_Cluster_Duration_Ly_%d" )) \
  (( CSC_CFEB_CLUSTERS_CHARGE_LY_XX, "CFEB_Clusters_Charge_Ly_%d" )) \
  (( CSC_CFEB_NUMBER_OF_CLUSTERS_LY_XX, "CFEB_Number_of_Clusters_Ly_%d" )) \
  (( CSC_CFEB_OUT_OFF_RANGE_STRIPS_LYXX, "CFEB_Out_Off_Range_Strips_Ly%d" )) \
  (( CSC_CFEB_PEDESTALRMS_SAMPLE_01_LYXX, "CFEB_PedestalRMS_Sample_01_Ly%d" )) \
  (( CSC_CFEB_PEDESTAL__WITHEMV__SAMPLE_01_LYXX, "CFEB_Pedestal(withEMV)_Sample_01_Ly%d" )) \
  (( CSC_CFEB_PEDESTAL_WITHEMV_SAMPLE_01_LYXX, "CFEB_Pedestal_withEMV_Sample_01_Ly%d" )) \
  (( CSC_CFEB_PEDESTAL__WITHRMS__SAMPLE_01_LYXX, "CFEB_Pedestal(withRMS)_Sample_01_Ly%d" )) \
  (( CSC_CFEB_PEDESTAL_WITHRMS_SAMPLE_01_LYXX, "CFEB_Pedestal_withRMS_Sample_01_Ly%d" )) \
  (( CSC_CFEB_SCA_CELL_PEAK_LY_XX, "CFEB_SCA_Cell_Peak_Ly_%d" )) \
  (( CSC_CFEB_WIDTH_OF_CLUSTERS_LY_XX, "CFEB_Width_of_Clusters_Ly_%d" )) \
  (( CSC_CFEBXX_DMB_L1A_DIFF, "CFEB%d_DMB_L1A_diff" )) \
  (( CSC_CFEBXX_FREE_SCA_CELLS, "CFEB%d_Free_SCA_Cells" )) \
  (( CSC_CFEBXX_L1A_SYNC_TIME, "CFEB%d_L1A_Sync_Time" )) \
  (( CSC_CFEBXX_L1A_SYNC_TIME_DMB_DIFF, "CFEB%d_L1A_Sync_Time_DMB_diff" )) \
  (( CSC_CFEBXX_L1A_SYNC_TIME_VS_DMB, "CFEB%d_L1A_Sync_Time_vs_DMB" )) \
  (( CSC_CFEBXX_LCT_PHASE_VS_L1A_PHASE, "CFEB%d_LCT_PHASE_vs_L1A_PHASE" )) \
  (( CSC_CFEBXX_SCA_BLOCK_OCCUPANCY, "CFEB%d_SCA_Block_Occupancy" )) \
  (( CSC_CFEBXX_SCA_BLOCKS_LOCKED_BY_LCTS, "CFEB%d_SCA_Blocks_Locked_by_LCTs" )) \
  (( CSC_CFEBXX_SCA_BLOCKS_LOCKED_BY_LCTXL1, "CFEB%d_SCA_Blocks_Locked_by_LCTxL1" )) \
  (( CSC_CLCT0_CLCT1_CLSSIFICATION, "CLCT0_CLCT1_Clssification" )) \
  (( CSC_CLCT0_CLSSIFICATION, "CLCT0_Clssification" )) \
  (( CSC_CLCT0_KEYDISTRIP_VS_ALCT0_KEYWIREGROUP, "CLCT0_KeyDiStrip_vs_ALCT0_KeyWiregroup" )) \
  (( CSC_CLCT1_VS_CLCT0_KEY_STRIP, "CLCT1_vs_CLCT0_Key_Strip" )) \
  (( CSC_CLCT_BXN, "CLCT_BXN" )) \
  (( CSC_CLCT_BXN_VS_DMB_BXN, "CLCT_BXN_vs_DMB_BXN" )) \
  (( CSC_CLCT_DMB_BXN_DIFF, "CLCT_DMB_BXN_diff" )) \
  (( CSC_CLCT_DMB_L1A_DIFF, "CLCT_DMB_L1A_diff" )) \
  (( CSC_CLCT_L1A, "CLCT_L1A" )) \
  (( CSC_CLCT_LYXX_EFFICIENCY, "CLCT_Ly%d_Efficiency" )) \
  (( CSC_CLCT_LYXX_RATE, "CLCT_Ly%d_Rate" )) \
  (( CSC_CLCT_NUMBER, "CLCT_Number" )) \
  (( CSC_CLCT_NUMBER_OF_HALFSTRIPS_WITH_HITS, "CLCT_Number_Of_HalfStrips_With_Hits" )) \
  (( CSC_CLCT_NUMBER_OF_LAYERS_WITH_HITS, "CLCT_Number_Of_Layers_With_Hits" )) \
  (( CSC_CLCT_NUMBER_RATE, "CLCT_Number_Rate" )) \
  (( CSC_CLCTTIME_LYXX, "CLCTTime_Ly%d" )) \
  (( CSC_CLCTTIME_LYXX_PROFILE, "CLCTTime_Ly%d_Profile" )) \
  (( CSC_CLCTXX_BXN, "CLCT%d_BXN" )) \
  (( CSC_CLCTXX_DISTRIP_PATTERN, "CLCT%d_DiStrip_Pattern" )) \
  (( CSC_CLCTXX_DISTRIP_QUALITY, "CLCT%d_DiStrip_Quality" )) \
  (( CSC_CLCTXX_DISTRIP_QUALITY_PROFILE, "CLCT%d_DiStrip_Quality_Profile" )) \
  (( CSC_CLCTXX_DTIME, "CLCT%d_dTime" )) \
  (( CSC_CLCTXX_DTIME_VS_DISTRIP, "CLCT%d_dTime_vs_DiStrip" )) \
  (( CSC_CLCTXX_DTIME_VS_HALF_STRIP, "CLCT%d_dTime_vs_Half_Strip" )) \
  (( CSC_CLCTXX_HALF_STRIP_PATTERN, "CLCT%d_Half_Strip_Pattern" )) \
  (( CSC_CLCTXX_HALF_STRIP_QUALITY, "CLCT%d_Half_Strip_Quality" )) \
  (( CSC_CLCTXX_HALF_STRIP_QUALITY_PROFILE, "CLCT%d_Half_Strip_Quality_Profile" )) \
  (( CSC_CLCTXX_KEYDISTRIP, "CLCT%d_KeyDiStrip" )) \
  (( CSC_CLCTXX_KEYHALFSTRIP, "CLCT%d_KeyHalfStrip" )) \
  (( CSC_CSC_EFFICIENCY, "CSC_Efficiency" )) \
  (( CSC_CSC_RATE, "CSC_Rate" )) \
  (( CSC_DMB_BXN_DISTRIB, "DMB_BXN_Distrib" )) \
  (( CSC_DMB_BXN_VS_DDU_BXN, "DMB_BXN_vs_DDU_BXN" )) \
  (( CSC_DMB_CFEB_ACTIVE, "DMB_CFEB_Active" )) \
  (( CSC_DMB_CFEB_ACTIVE_VS_DAV, "DMB_CFEB_Active_vs_DAV" )) \
  (( CSC_DMB_CFEB_DAV, "DMB_CFEB_DAV" )) \
  (( CSC_DMB_CFEB_DAV_MULTIPLICITY, "DMB_CFEB_DAV_multiplicity" )) \
  (( CSC_DMB_CFEB_DAV_MULTIPLICITY_UNPACKING_INEFFICIENCY, "DMB_CFEB_DAV_multiplicity_Unpacking_Inefficiency" )) \
  (( CSC_DMB_CFEB_DAV_UNPACKING_INEFFICIENCY, "DMB_CFEB_DAV_Unpacking_Inefficiency" )) \
  (( CSC_DMB_CFEB_MOVLP, "DMB_CFEB_MOVLP" )) \
  (( CSC_DMB_CFEB_SYNC, "DMB_CFEB_Sync" )) \
  (( CSC_DMB_DDU_BXN_DIFF, "DMB_DDU_BXN_diff" )) \
  (( CSC_DMB_DDU_L1A_DIFF, "DMB_DDU_L1A_diff" )) \
  (( CSC_DMB_FEB_COMBINATIONS_DAV_EFFICIENCY, "DMB_FEB_Combinations_DAV_Efficiency" )) \
  (( CSC_DMB_FEB_COMBINATIONS_DAV_RATE, "DMB_FEB_Combinations_DAV_Rate" )) \
  (( CSC_DMB_FEB_COMBINATIONS_DAV_UNPACKING_INEFFICIENCY, "DMB_FEB_Combinations_DAV_Unpacking_Inefficiency" )) \
  (( CSC_DMB_FEB_COMBINATIONS_UNPACKED_VS_DAV, "DMB_FEB_Combinations_Unpacked_vs_DAV" )) \
  (( CSC_DMB_FEB_DAV_EFFICIENCY, "DMB_FEB_DAV_Efficiency" )) \
  (( CSC_DMB_FEB_DAV_RATE, "DMB_FEB_DAV_Rate" )) \
  (( CSC_DMB_FEB_DAV_UNPACKING_INEFFICIENCY, "DMB_FEB_DAV_Unpacking_Inefficiency" )) \
  (( CSC_DMB_FEB_TIMEOUTS, "DMB_FEB_Timeouts" )) \
  (( CSC_DMB_FEB_UNPACKED_VS_DAV, "DMB_FEB_Unpacked_vs_DAV" )) \
  (( CSC_DMB_FIFO_STATS, "DMB_FIFO_stats" )) \
  (( CSC_DMB_L1A_DISTRIB, "DMB_L1A_Distrib" )) \
  (( CSC_DMB_L1A_VS_ALCT_L1A, "DMB_L1A_vs_ALCT_L1A" )) \
  (( CSC_DMB_L1A_VS_CLCT_L1A, "DMB_L1A_vs_CLCT_L1A" )) \
  (( CSC_DMB_L1A_VS_DDU_L1A, "DMB_L1A_vs_DDU_L1A" )) \
  (( CSC_DMB_L1_PIPE, "DMB_L1_Pipe" )) \
  (( CSC_LCT0_MATCH_BXN_DIFFERENCE, "LCT0_Match_BXN_Difference" )) \
  (( CSC_LCT1_MATCH_BXN_DIFFERENCE, "LCT1_Match_BXN_Difference" )) \
  (( CSC_LCT_MATCH_STATUS, "LCT_Match_Status" )) \
  (( CSC_TMB_ALCT_BXN_DIFF, "TMB_ALCT_BXN_diff" )) \
  (( CSC_TMB_ALCT_L1A_DIFF, "TMB_ALCT_L1A_diff" )) \
  (( CSC_TMB_BXN_VS_ALCT_BXN, "TMB_BXN_vs_ALCT_BXN" )) \
  (( CSC_TMB_L1A_VS_ALCT_L1A, "TMB_L1A_vs_ALCT_L1A" )) \
  (( CSC_TMB_WORD_COUNT, "TMB_Word_Count" )) \
  (( DDU_BUFFER_SIZE, "Buffer_Size" )) \
  (( DDU_BXN, "BXN" )) \
  (( DDU_CSC_ERRORS, "CSC_Errors" )) \
  (( DDU_CSC_ERRORS_RATE, "CSC_Errors_Rate" )) \
  (( DDU_CSC_WARNINGS, "CSC_Warnings" )) \
  (( DDU_CSC_WARNINGS_RATE, "CSC_Warnings_Rate" )) \
  (( DDU_DMB_ACTIVE_HEADER_COUNT, "DMB_Active_Header_Count" )) \
  (( DDU_DMB_CONNECTED_INPUTS, "DMB_Connected_Inputs" )) \
  (( DDU_DMB_CONNECTED_INPUTS_RATE, "DMB_Connected_Inputs_Rate" )) \
  (( DDU_DMB_DAV_HEADER_COUNT_VS_DMB_ACTIVE_HEADER_COUNT, "DMB_DAV_Header_Count_vs_DMB_Active_Header_Count" )) \
  (( DDU_DMB_DAV_HEADER_OCCUPANCY, "DMB_DAV_Header_Occupancy" )) \
  (( DDU_DMB_DAV_HEADER_OCCUPANCY_RATE, "DMB_DAV_Header_Occupancy_Rate" )) \
  (( DDU_DMB_UNPACKED_VS_DAV, "DMB_unpacked_vs_DAV" )) \
  (( DDU_L1A_INCREMENT, "L1A_Increment" )) \
  (( DDU_TRAILER_ERRORSTAT_FREQUENCY, "Trailer_ErrorStat_Frequency" )) \
  (( DDU_TRAILER_ERRORSTAT_RATE, "Trailer_ErrorStat_Rate" )) \
  (( DDU_TRAILER_ERRORSTAT_TABLE, "Trailer_ErrorStat_Table" )) \
  (( DDU_WORD_COUNT, "Word_Count" )) \
  (( EMU_ALL_DDUS_AVERAGE_EVENT_SIZE, "All_DDUs_Average_Event_Size" )) \
  (( EMU_ALL_DDUS_AVERAGE_INPUTS_WITH_DATA, "All_DDUs_Average_Inputs_with_Data" )) \
  (( EMU_ALL_DDUS_AVERAGE_LIVE_INPUTS, "All_DDUs_Average_Live_Inputs" )) \
  (( EMU_ALL_DDUS_EVENT_SIZE, "All_DDUs_Event_Size" )) \
  (( EMU_ALL_DDUS_FORMAT_ERRORS, "All_DDUs_Format_Errors" )) \
  (( EMU_ALL_DDUS_INPUTS_ERRORS, "All_DDUs_Inputs_Errors" )) \
  (( EMU_ALL_DDUS_INPUTS_WARNINGS, "All_DDUs_Inputs_Warnings" )) \
  (( EMU_ALL_DDUS_INPUTS_WITH_DATA, "All_DDUs_Inputs_with_Data" )) \
  (( EMU_ALL_DDUS_IN_READOUT, "All_DDUs_in_Readout" )) \
  (( EMU_ALL_DDUS_L1A_INCREMENT, "All_DDUs_L1A_Increment" )) \
  (( EMU_ALL_DDUS_LIVE_INPUTS, "All_DDUs_Live_Inputs" )) \
  (( EMU_ALL_DDUS_TRAILER_ERRORS, "All_DDUs_Trailer_Errors" )) \
  (( EMU_ALL_READOUT_ERRORS, "All_Readout_Errors" )) \
  (( EMU_CSC_DMB_INPUT_FIFO_FULL, "CSC_DMB_input_fifo_full" )) \
  (( EMU_CSC_DMB_INPUT_FIFO_FULL_FRACT, "CSC_DMB_input_fifo_full_Fract" )) \
  (( EMU_CSC_DMB_INPUT_TIMEOUT, "CSC_DMB_input_timeout" )) \
  (( EMU_CSC_DMB_INPUT_TIMEOUT_FRACT, "CSC_DMB_input_timeout_Fract" )) \
  (( EMU_CSC_FORMAT_ERRORS, "CSC_Format_Errors" )) \
  (( EMU_CSC_FORMAT_ERRORS_FRACT, "CSC_Format_Errors_Fract" )) \
  (( EMU_CSC_FORMAT_WARNINGS, "CSC_Format_Warnings" )) \
  (( EMU_CSC_FORMAT_WARNINGS_FRACT, "CSC_Format_Warnings_Fract" )) \
  (( EMU_CSC_L1A_OUT_OF_SYNC, "CSC_L1A_out_of_sync" )) \
  (( EMU_CSC_L1A_OUT_OF_SYNC_FRACT, "CSC_L1A_out_of_sync_Fract" )) \
  (( EMU_CSC_REPORTING, "CSC_Reporting" )) \
  (( EMU_CSC_STATS_CFEB_BWORDS, "CSC_STATS_cfeb_bwords" )) \
  (( EMU_CSC_STATS_FIFOFULL_ERR, "CSC_STATS_fifofull_err" )) \
  (( EMU_CSC_STATS_FORMAT_ERR, "CSC_STATS_format_err" )) \
  (( EMU_CSC_STATS_INPUTTO_ERR, "CSC_STATS_inputto_err" )) \
  (( EMU_CSC_STATS_L1SYNC_ERR, "CSC_STATS_l1sync_err" )) \
  (( EMU_CSC_STATS_OCCUPANCY, "CSC_STATS_occupancy" )) \
  (( EMU_CSC_STATS_SUMMARY, "CSC_STATS_summary" )) \
  (( EMU_CSC_STATS_WO_ALCT, "CSC_STATS_wo_alct" )) \
  (( EMU_CSC_STATS_WO_CFEB, "CSC_STATS_wo_cfeb" )) \
  (( EMU_CSC_STATS_WO_CLCT, "CSC_STATS_wo_clct" )) \
  (( EMU_CSC_UNPACKED, "CSC_Unpacked" )) \
  (( EMU_CSC_UNPACKED_FRACT, "CSC_Unpacked_Fract" )) \
  (( EMU_CSC_UNPACKED_WITH_ERRORS, "CSC_Unpacked_with_errors" )) \
  (( EMU_CSC_WO_ALCT, "CSC_wo_ALCT" )) \
  (( EMU_CSC_WO_ALCT_FRACT, "CSC_wo_ALCT_Fract" )) \
  (( EMU_CSC_WO_CFEB, "CSC_wo_CFEB" )) \
  (( EMU_CSC_WO_CFEB_FRACT, "CSC_wo_CFEB_Fract" )) \
  (( EMU_CSC_WO_CLCT, "CSC_wo_CLCT" )) \
  (( EMU_CSC_WO_CLCT_FRACT, "CSC_wo_CLCT_Fract" )) \
  (( EMU_DMB_FORMAT_ERRORS, "DMB_Format_Errors" )) \
  (( EMU_DMB_FORMAT_ERRORS_FRACT, "DMB_Format_Errors_Fract" )) \
  (( EMU_DMB_FORMAT_WARNINGS, "DMB_Format_Warnings" )) \
  (( EMU_DMB_FORMAT_WARNINGS_FRACT, "DMB_Format_Warnings_Fract" )) \
  (( EMU_DMB_INPUT_FIFO_FULL, "DMB_input_fifo_full" )) \
  (( EMU_DMB_INPUT_FIFO_FULL_FRACT, "DMB_input_fifo_full_Fract" )) \
  (( EMU_DMB_INPUT_TIMEOUT, "DMB_input_timeout" )) \
  (( EMU_DMB_INPUT_TIMEOUT_FRACT, "DMB_input_timeout_Fract" )) \
  (( EMU_DMB_L1A_OUT_OF_SYNC, "DMB_L1A_out_of_sync" )) \
  (( EMU_DMB_L1A_OUT_OF_SYNC_FRACT, "DMB_L1A_out_of_sync_Fract" )) \
  (( EMU_DMB_REPORTING, "DMB_Reporting" )) \
  (( EMU_DMB_UNPACKED, "DMB_Unpacked" )) \
  (( EMU_DMB_UNPACKED_FRACT, "DMB_Unpacked_Fract" )) \
  (( EMU_DMB_UNPACKED_WITH_ERRORS, "DMB_Unpacked_with_errors" )) \
  (( EMU_DMB_WO_ALCT, "DMB_wo_ALCT" )) \
  (( EMU_DMB_WO_ALCT_FRACT, "DMB_wo_ALCT_Fract" )) \
  (( EMU_DMB_WO_CFEB, "DMB_wo_CFEB" )) \
  (( EMU_DMB_WO_CFEB_FRACT, "DMB_wo_CFEB_Fract" )) \
  (( EMU_DMB_WO_CLCT, "DMB_wo_CLCT" )) \
  (( EMU_DMB_WO_CLCT_FRACT, "DMB_wo_CLCT_Fract" )) \
  (( EMU_FED_ENTRIES, "FEDEntries" )) \
  (( EMU_FED_FATAL, "FEDFatal" )) \
  (( EMU_FED_NONFATAL, "FEDNonFatal" )) \
  (( EMU_PHYSICS_EMU, "Physics_EMU" )) \
  (( EMU_PHYSICS_ME1, "Physics_ME1" )) \
  (( EMU_PHYSICS_ME2, "Physics_ME2" )) \
  (( EMU_PHYSICS_ME3, "Physics_ME3" )) \
  (( EMU_PHYSICS_ME4, "Physics_ME4" )) \
  (( PAR_REPORT_SUMMARY, "reportSummary" )) \
  (( PAR_CSC_SIDEMINUS, "CSC_SideMinus" )) \
  (( PAR_CSC_SIDEMINUS_STATION01, "CSC_SideMinus_Station01" )) \
  (( PAR_CSC_SIDEMINUS_STATION01_RING01, "CSC_SideMinus_Station01_Ring01" )) \
  (( PAR_CSC_SIDEMINUS_STATION01_RING02, "CSC_SideMinus_Station01_Ring02" )) \
  (( PAR_CSC_SIDEMINUS_STATION01_RING03, "CSC_SideMinus_Station01_Ring03" )) \
  (( PAR_CSC_SIDEMINUS_STATION02, "CSC_SideMinus_Station02" )) \
  (( PAR_CSC_SIDEMINUS_STATION02_RING01, "CSC_SideMinus_Station02_Ring01" )) \
  (( PAR_CSC_SIDEMINUS_STATION02_RING02, "CSC_SideMinus_Station02_Ring02" )) \
  (( PAR_CSC_SIDEMINUS_STATION03, "CSC_SideMinus_Station03" )) \
  (( PAR_CSC_SIDEMINUS_STATION03_RING01, "CSC_SideMinus_Station03_Ring01" )) \
  (( PAR_CSC_SIDEMINUS_STATION03_RING02, "CSC_SideMinus_Station03_Ring02" )) \
  (( PAR_CSC_SIDEMINUS_STATION04, "CSC_SideMinus_Station04" )) \
  (( PAR_CSC_SIDEPLUS, "CSC_SidePlus" )) \
  (( PAR_CSC_SIDEPLUS_STATION01, "CSC_SidePlus_Station01" )) \
  (( PAR_CSC_SIDEPLUS_STATION01_RING01, "CSC_SidePlus_Station01_Ring01" )) \
  (( PAR_CSC_SIDEPLUS_STATION01_RING02, "CSC_SidePlus_Station01_Ring02" )) \
  (( PAR_CSC_SIDEPLUS_STATION01_RING03, "CSC_SidePlus_Station01_Ring03" )) \
  (( PAR_CSC_SIDEPLUS_STATION02, "CSC_SidePlus_Station02" )) \
  (( PAR_CSC_SIDEPLUS_STATION02_RING01, "CSC_SidePlus_Station02_Ring01" )) \
  (( PAR_CSC_SIDEPLUS_STATION02_RING02, "CSC_SidePlus_Station02_Ring02" )) \
  (( PAR_CSC_SIDEPLUS_STATION03, "CSC_SidePlus_Station03" )) \
  (( PAR_CSC_SIDEPLUS_STATION03_RING01, "CSC_SidePlus_Station03_Ring01" )) \
  (( PAR_CSC_SIDEPLUS_STATION03_RING02, "CSC_SidePlus_Station03_Ring02" )) \
  (( PAR_CSC_SIDEPLUS_STATION04, "CSC_SidePlus_Station04" )) \
  \
  \
  /* */


#define CONFIG_MACRO_ID(r, data, i, elem) \
  const HistoId BOOST_PP_TUPLE_ELEM(2, 0, elem) = i;

#define CONFIG_MACRO_NAME(r, data, i, elem) \
  BOOST_PP_TUPLE_ELEM(2, 1, elem) \
  BOOST_PP_COMMA_IF(BOOST_PP_LESS(BOOST_PP_INC(i), BOOST_PP_SEQ_SIZE(CONFIG_HISTONAMES_SEQ)))

  BOOST_PP_SEQ_FOR_EACH_I(CONFIG_MACRO_ID, _, CONFIG_HISTONAMES_SEQ)

  static const HistoName names[] = {
    BOOST_PP_SEQ_FOR_EACH_I(CONFIG_MACRO_NAME, _, CONFIG_HISTONAMES_SEQ)
  };

  static const unsigned int namesSize = BOOST_PP_SEQ_SIZE(CONFIG_HISTONAMES_SEQ);

}

#undef CONFIG_HISTONAMES_SEQ
#undef CONFIG_MACRO_ID
#undef CONFIG_MACRO_NAME

#endif

