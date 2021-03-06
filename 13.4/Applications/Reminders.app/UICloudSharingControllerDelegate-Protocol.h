//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSString, UICloudSharingController;

@protocol UICloudSharingControllerDelegate <NSObject>
- (NSString *)itemTitleForCloudSharingController:(UICloudSharingController *)arg1;
- (void)cloudSharingController:(UICloudSharingController *)arg1 failedToSaveShareWithError:(NSError *)arg2;

@optional
- (void)cloudSharingControllerDidStopSharing:(UICloudSharingController *)arg1;
- (void)cloudSharingControllerDidSaveShare:(UICloudSharingController *)arg1;
- (NSString *)itemTypeForCloudSharingController:(UICloudSharingController *)arg1;
- (NSData *)itemThumbnailDataForCloudSharingController:(UICloudSharingController *)arg1;
@end

