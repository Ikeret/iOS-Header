//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SSHTTPServerRequestHandler;

@protocol SSHTTPServerRequestHandlerDelegate
- (SSHTTPServerResponse * (^)(NSURLRequest *))responseBlockForPath:(NSString *)arg1;
- (void)requestDidFinish:(SSHTTPServerRequestHandler *)arg1;
@end

