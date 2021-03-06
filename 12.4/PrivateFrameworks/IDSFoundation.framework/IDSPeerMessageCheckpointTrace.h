//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommonUtilities/CUTCheckpointTrace.h>

@class CUTCheckpointRange, NSMutableArray, NSString;

@interface IDSPeerMessageCheckpointTrace : CUTCheckpointTrace
{
    NSString *_guid;
    CUTCheckpointRange *_IDQuery;
    CUTCheckpointRange *_messageOnQueue;
    NSMutableArray *_mutableEncryptionCheckpoints;
    NSMutableArray *_mutableAggregateMessageSendCheckpoints;
}

@property(retain, nonatomic) NSMutableArray *mutableAggregateMessageSendCheckpoints; // @synthesize mutableAggregateMessageSendCheckpoints=_mutableAggregateMessageSendCheckpoints;
@property(retain, nonatomic) NSMutableArray *mutableEncryptionCheckpoints; // @synthesize mutableEncryptionCheckpoints=_mutableEncryptionCheckpoints;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;
@property(readonly, nonatomic) CUTCheckpointRange *messageOnQueue; // @synthesize messageOnQueue=_messageOnQueue;
@property(readonly, nonatomic) CUTCheckpointRange *IDQuery; // @synthesize IDQuery=_IDQuery;
- (id)aggregateMessageSendCheckpoints;
- (id)encryptionCheckpoints;
- (id)checkpointByAppendingAggregateMessageSendCheckpoint;
- (id)checkpointByAppendingEncryptionCheckpoint;
- (id)checkpoints;
- (id)initWithGuid:(id)arg1 uniqueIdentifier:(id)arg2;

@end

