//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL, PSSpotlightSearchResultsController, UIImage;

@protocol PSSpotlightSearchResultsControllerDelegate
- (UIImage *)searchResultsController:(PSSpotlightSearchResultsController *)arg1 iconForCategory:(NSString *)arg2;
- (long long)searchResultsController:(PSSpotlightSearchResultsController *)arg1 sortCategory1:(NSString *)arg2 sortCategory2:(NSString *)arg3;
- (void)searchResultsController:(PSSpotlightSearchResultsController *)arg1 didSelectURL:(NSURL *)arg2;
@end

