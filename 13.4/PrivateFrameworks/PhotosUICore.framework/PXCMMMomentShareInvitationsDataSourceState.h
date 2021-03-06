//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXCMMMomentShareInvitationsDataSourceState : NSObject <NSCopying>
{
    PHFetchResult *_momentShares;
    NSDictionary *_invitationsByMomentShareObjectID;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *invitationsByMomentShareObjectID; // @synthesize invitationsByMomentShareObjectID=_invitationsByMomentShareObjectID;
@property(readonly, nonatomic) PHFetchResult *momentShares; // @synthesize momentShares=_momentShares;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithMomentShares:(id)arg1 invitationsByMomentShareObjectID:(id)arg2;

@end

