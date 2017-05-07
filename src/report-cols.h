/*
 * report-cols.h
 * Copyright (C) 2017 fbreitwieser <fbreitwieser@sherman>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef REPORT_COLS_H
#define REPORT_COLS_H

#include<map>
#include<string>

enum class REPORTCOLS : uint8_t {
	SPACED_NAME,
	NAME,
	TAX_ID,
	TAX_RANK,
	DEPTH,
	GENOME_SIZE,
	NUM_READS,
	NUM_READS_CLADE,
	NUM_KMERS,
	NUM_KMERS_CLADE,
	NUM_UNIQUE_KMERS,
	NUM_UNIQUE_KMERS_CLADE,
	NUM_KMERS_IN_DATABASE,
	NUM_KMERS_IN_DATABASE_CLADE,
	TOTAL_SCORE,
	TOTAL_HIT_LENGTH,
	ABUNDANCE,
	ABUNDANCE_LEN,
	PERCENTAGE
};


static const std::map<std::string, REPORTCOLS> report_col_name_map = {
		{"name", REPORTCOLS::NAME},
		{"indentedName", REPORTCOLS::SPACED_NAME},
		{"taxID", REPORTCOLS::TAX_ID},
		{"taxRank", REPORTCOLS::TAX_RANK},
		{"depth", REPORTCOLS::DEPTH},
		{"genomeSize", REPORTCOLS::GENOME_SIZE},
		{"numReadsTaxon", REPORTCOLS::NUM_READS},
		{"numReadsClade", REPORTCOLS::NUM_READS_CLADE},
		{"numKmersTaxon", REPORTCOLS::NUM_KMERS},
		{"numKmersClade", REPORTCOLS::NUM_KMERS_CLADE},
		{"numUniqueKmersTaxon", REPORTCOLS::NUM_UNIQUE_KMERS},
		{"numUniqueKmersClade", REPORTCOLS::NUM_UNIQUE_KMERS_CLADE},
		{"numKmersInDatabaseTaxon", REPORTCOLS::NUM_KMERS_IN_DATABASE},
		{"numKmersInDatabaseClade", REPORTCOLS::NUM_KMERS_IN_DATABASE_CLADE},
		{"totalHitLen", REPORTCOLS::TOTAL_HIT_LENGTH},
		{"totalScore", REPORTCOLS::TOTAL_SCORE},
		{"abundance", REPORTCOLS::ABUNDANCE},
		{"abundance_len", REPORTCOLS::ABUNDANCE_LEN},

		{"percReadsClade", REPORTCOLS::PERCENTAGE},
		{"percent", REPORTCOLS::PERCENTAGE},
		{"taxId", REPORTCOLS::TAX_ID},
		{"reads_clade", REPORTCOLS::NUM_READS_CLADE}, // Change to clade reads!
		{"reads_stay", REPORTCOLS::NUM_READS}, // Change to clade reads!

};

#endif /* !REPORT_COLS_H */
