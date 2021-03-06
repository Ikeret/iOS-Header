//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class LogEntry, NSMutableArray;

@interface RevisionLogInclusionProofResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTopLevelTreeEntry; // @dynamic hasTopLevelTreeEntry;
@property(retain, nonatomic) NSMutableArray *logEntryArray; // @dynamic logEntryArray;
@property(readonly, nonatomic) unsigned long long logEntryArray_Count; // @dynamic logEntryArray_Count;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) LogEntry *topLevelTreeEntry; // @dynamic topLevelTreeEntry;

@end

