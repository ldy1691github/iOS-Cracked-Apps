//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@interface DPLSnifferFailedItem : NSObject
{
    NSString *_URLStr;
    NSDictionary *_headerInfo;
    NSData *_bodyData;
}

@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(retain, nonatomic) NSDictionary *headerInfo; // @synthesize headerInfo=_headerInfo;
@property(copy, nonatomic) NSString *URLStr; // @synthesize URLStr=_URLStr;
- (void).cxx_destruct;
- (id)description;

@end

