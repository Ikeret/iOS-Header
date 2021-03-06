//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
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

