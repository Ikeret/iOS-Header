//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCTransferInfo.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _BRCUploadInfo : _BRCTransferInfo
{
    NSMutableSet *_outOfQuotaDocIDs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *outOfQuotaDocIDs; // @synthesize outOfQuotaDocIDs=_outOfQuotaDocIDs;
- (void)copyProgressInfoToProgress:(id)arg1 options:(BOOL)arg2;
- (void)updateLocalizedDescriptionWithOptions:(BOOL)arg1;
- (id)description;
- (id)init;
@property(readonly, nonatomic) _Bool allUploadsPendingQuota;

@end

