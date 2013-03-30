Drupal.behaviors.RestServicesTest = {
	attach: function () {
		(function ($) {
			$.fn.serializeObject = function()
			{
			   var o = {};
			   var a = this.serializeArray();
			   $.each(a, function() {
			       if (o[this.name]) {
			           if (!o[this.name].push) {
			               o[this.name] = [o[this.name]];
			           }
			           o[this.name].push(this.value || '');
			       } else {
			           o[this.name] = this.value || '';
			       }
			   });
			   return o;
			};

			var uid = 1;
			var apipath = "/third_content";

			// Simple example.
			// of calling user update services
			// var account = {
			// 	uid: uid,
			// 	mail: 'asd@a.com',
			// 	pass: '123456',
			// 	name: 'admin',
			// 	current_pass: 'admin'
			// };
			// $.ajax({
			// 	type: "PUT",
			// 	url: apipath + "/user/1",
			// 	dataType: "json",
			// 	data: JSON.stringify({data: account}),
			// 	contentType: "application/json",
			// 	success: function (data) {
			// 		console.log(data);
			// 	}
			// });

			// Simple example form (include user profile picture )
			// Of calling user update services
			$("#update_user_service").click(function () {
				try {
					var account = $("#user-profile-form-service").serializeObject();
					$.ajax({
						type: "PUT",
						url: apipath + "/user/1",
						dataType: "json",
						data: JSON.stringify({data: account}),
						contentType: "application/json",
						success: function (ret) {
							console.log(ret);
						}
					});
				}
				catch(e) {
					console.log(e.message);
				}

				return false;
			});


		})(jQuery);
	}
}