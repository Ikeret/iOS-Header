//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMBalloonPlugin.h>

@interface IMBalloonPlugin (ImageLoading)
- (id)recentsBadgeIcon;
- (id)appStoreBadgeIcon;
- (id)description;
- (id)_scaledImage:(id)arg1 xscale:(double)arg2 yscale:(double)arg3;
- (id)__ck_statusJPEGImageDataForTransportWithCompressionFactor:(double)arg1;
- (id)__ck_statusImageForTransport;
- (id)__ck_breadcrumbImage;
- (id)__ck_statusImage;
- (id)__ck_badgeImage;
- (id)__ck_browserImageName:(_Bool *)arg1;
- (id)__ck_browserImageGenerateSynchronously:(_Bool)arg1;
- (id)__ck_browserImage;
- (void)__ck_prefetchBrowserImage;
- (id)iconCache;
@end

